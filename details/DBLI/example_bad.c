#include <linux/spinlock.h>
 
struct sbuf_mgr {
  int         sbuf_inited;
  spinlock_t  sbuf_lock;
  char       *sbuf;
};
 
int is_sbuf_inited(struct sbuf_mgr *p_sbuf_mgr);
void sbuf_mgr_reset(struct sbuf_mgr *p_sbuf_mgr);
void write_data(struct sbuf_mgr *p_sbuf_mgr);
 
// thread 1
int *worker1(void *args)
{
  struct sbuf_mgr * p_sbuf_mgr = args;
  if (is_sbuf_inited(p_sbuf_mgr)) {
     write_data(p_sbuf_mgr);
  }
  return 0;
}
 
int is_sbuf_inited( struct sbuf_mgr *p_sbuf_mgr )
{
    int tmp_inited;
    unsigned long irq_flags;
    spin_lock_irqsave( &p_sbuf_mgr->sbuf_lock, irq_flags );
    tmp_inited = p_sbuf_mgr->sbuf_inited;
    spin_unlock_irqrestore( &p_sbuf_mgr->sbuf_lock, irq_flags );
    return tmp_inited;
}
 
// thread 2
int *worker2(void *args)
{
  struct sbuf_mgr * p_sbuf_mgr = args;

  // spin_lock_init called in thread2 with this call
  sbuf_mgr_reset(p_sbuf_mgr);
  return 0;
}
 
void sbuf_mgr_reset( struct sbuf_mgr *p_sbuf_mgr )
{
    int i;
    unsigned long irq_flags;
    
    spin_lock_init(&(p_sbuf_mgr->sbuf_lock));  
    spin_lock_irqsave(&p_sbuf_mgr->sbuf_lock, irq_flags);
    // .. do the work 
}
 
int test_init_in_thread(void)
{
  struct sbuf_mgr buf_mgr;
  struct task_struct *worker1_task, *worker2_task;
 
  worker1_task = kthread_create(worker1, (void*)&buf_mgr, "thread1");
 
  worker2_task = kthread_create(worker2, (void*)&buf_mgr, "thread2");
  // ,,, 
  
  // start tasks
  wake_up_process(worker1_task);
  wake_up_process(worker2_task);
  return 0;
}
 
void init(struct sbuf_mgr *buf_mgr)
{
  spin_lock_init(&(buf_mgr->sbuf_lock));
}
  
int test_double_init(bool is_double_init)
{
  struct sbuf_mgr buf_mgr;

  // first initialization 
  init(&buf_mgr);
  
  if (is_double_init) {
    // if true, call init, causing double init
    init(&buf_mgr);
  }
}

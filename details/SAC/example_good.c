#include <linux/spinlock.h>
void test_isr1(int irq, spinlock_t *lock)
{
  // this guarantees interrupt state is saved and that
  // the critical section will not be preempted by the kernel
  spin_lock_irqsave(lock);  
}
 
 
// cross function check
noinline
void call_spin(spinlock_t *lock)
{
  spin_lock(lock);
}

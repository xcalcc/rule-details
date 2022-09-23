#include <linux/spinlock.h>
void test_isr1(int irq, spinlock_t *lock)
{
  spin_lock(lock);  // VUL: should use spin_lock_irqsave
}
 
// cross function check
noinline
void call_spin(spinlock_t *lock)
{
  spin_lock(lock);
}



#include <linux/spinlock.h>
void bad(int irq, spinlock_t lock)
{
  // 
  spin_lock(&lock);
}
 
void bad2(int irq, spinlock_t lock, spinlock_t lock2)
{
  spin_lock(&lock);
}

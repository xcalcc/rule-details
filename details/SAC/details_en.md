#### Abstract
The program has entered an atomic region/context, within that region, there is operation that may cause the program to pause, delay due to interrupt or sleep. 


#### Explanation
When a program is inside an atomic context or locked region, any operation that may pause due to sleep, interrupt or wait etc may cause dead lock.
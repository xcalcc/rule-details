#### 概要
在try语句之后，程序无法按正确的顺序管理异常捕获处理程序。 当前顺序是从最小派生（更一般）到最大派生（更具体）。
 
#### 解释
捕获处理程序按照try语句后的声明顺序进行。正确的顺序应该是从最大派生到最小派生，从最具体到不具体。
如果捕获是从最小派生开始，而它可能从最大派生处中捕获到的问题。这样，最大派生的捕获处理程序将不会被执行，这种行为是不可取的。
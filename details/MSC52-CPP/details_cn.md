### 概要
程序具有non-void return函数，但该函数有执行路径将到达出口而不会遇到“return”语句。 

#### 解释
当调用函数时会预期有返回指，然后不是所有的代码路径都会返回一个值，而这可能会造成未定义的行为。 

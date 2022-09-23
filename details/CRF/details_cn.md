#### 概要
该程序有调用序列，它在运行时造成了递归

#### 解释
当一个函数(假定是A)调用另外一个函数而调用序列最终再次调用A时，会发生递归。其最简单的形式是函数在执行期间就调用自身，这可能会导致无限循环，还可能会造成对栈空间的过分使用，并可能导致内存不足或栈空间问题。
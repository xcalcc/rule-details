#### 概要
该程序在变量初始化前使用该变量。

#### 解释
C和C++里的栈变量默认为非初始化，并且非静态全局变量不默认为零。它们的初始值取决于调用函数时它们在内存中的位置里恰好有的值。这么做会导致意外程序行为。

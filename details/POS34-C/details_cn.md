#### 概要
该程序调用了putenv()，它有指向本地对象的参数。

#### 解释
系统调用putenv()会保存参数（为指向预期字符串的指针）到环境数组。当该函数返回到调用者时，可能会重写带有环境字符串的本地对象。这会造成不可预测的程序行为。

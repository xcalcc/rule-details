#### 名称
在原子上下文或者锁定区域中调用睡眠函数

#### 概要
当程序在原子上下文状态或者锁定区域时，存在着操作使得程序因等待中断或调用睡眠函数而引发程序运行暂停或者延迟

#### 解释
当程序在原子上下文状态或者锁定区域时，任何运行都有可能因睡眠、中断或者等待而发生中止，从而导致死锁。
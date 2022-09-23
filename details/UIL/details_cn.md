#### 名称
锁未被初始化

#### 概要
当自旋锁被调用时，锁未被初始化

#### 解释
使用自旋锁时需要有资源分配，并且需要被初始化到解锁状态，否则会导致不可确定的系统行为。
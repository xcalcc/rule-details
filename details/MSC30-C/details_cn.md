#### 概要
此程序正在使用伪随机数生成器，因此可能会生成可预测的数字序列。

#### 解释
rand()函数会生成不完全随机且周期较短的数字，使攻击者有可能会猜出下一个生成的数值。程序员应该使用更好且适当播种的随机函数。
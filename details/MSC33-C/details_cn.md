#### 概要
该程序正调用asctime()函数，然而该函数的输入参数来自不受信任来源。

#### 解释
函数asctime()不验证其输入参数的值或范围。在试图打印到字符串时，对该函数返回结果的继续使用可能造成缓存溢出及其它安全违规。

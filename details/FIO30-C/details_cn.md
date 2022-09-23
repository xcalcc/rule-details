#### 概要
该程序含有的格式规范包含了char类型（即字符串）参数，其来源不受信任，因此被认定为已受污染。

#### 解释
格式化的I/O函数可能会被诱导去覆盖或读取任意内存位置的值。当输入来源不受信任时，最好不要使用格式字符串以及相关函数来执行I/O操作。
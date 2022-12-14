### 概要
程序在共享目录中创建了临时文件，但没有删除或防止访问程序来避免共享目录受到攻击。

#### 解释
当数据需要从一个进程传输到另一个而不能保存在内存中的时候，创建临时文件通常被用作传输数据的一种方式。如果对于这些临时文件没有清理操作，或者临时文件名是可预测的，那么就容易造成攻击者攻击这些临时文件。要是这些临时文件包含敏感信息，那么后果将会非常严重。

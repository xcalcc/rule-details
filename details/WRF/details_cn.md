#### 概要
该程序正对只读文件执行写操作。

#### 解释
当打开文件进行读取并随后写入时，fwrite会报告错误。如果不检查fwrite的结果，则该程序会继续进行，而文件可能不会按预期得到更新。
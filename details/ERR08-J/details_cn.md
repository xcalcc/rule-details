#### 概要
该程序正捕捉NullPointerException。

#### 解释
运行时抛出的NullPointerException表明有底层缺陷，必须在应用程序代码里修复它。捕捉此异常（或者其它像RuntimeException、Exception或Throwable这样的异常）会增加运行时的性能消耗。此外，当发生这种情况时，程序很可能处于未知状态，而继续执行可能导致意外结果。

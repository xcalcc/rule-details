#### 概要
该程序正调用C标准system()函数。如果保护不当，可能会导致多种攻击。

#### 解释
该程序正调用有字符串参数的system()函数。必须适当地保护此类字符串，例如清理过的字符串、规范化的路径等等。未能这么做将导致程序的任意执行、权限提升或其它不可预测行为。

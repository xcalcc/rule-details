#### 概要
该程序正使用java.nio包里的buffer类里的wrap()或duplicate()方法。这些缓存暴露给了程序里不受信任的代码。

#### 解释
此方法会创建从给定输入数组生成的新Buffer对象。而新的Buffer对象可能被恶意修改。使用只读Buffer或确保原本的buffer不被修改是很重要的。

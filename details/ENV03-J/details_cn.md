#### 概要
程序授予权限或者权限组合给代码，而这类操作可能存在风险。

#### 解释
权限组合授予代码可能是危险的。例如，当应用RunitimePermission到createClassLoader时，它会创建自定义类加载器并分配任意权限。ReflextPermission和suppressAccessChecks一起将阻止所有标准检查。

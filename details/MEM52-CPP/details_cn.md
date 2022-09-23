### 概要
默认的allocators不会检查allocation的结果，即使它产生任何异常。任何错误都必须被捕捉和处理。

#### 解释
C++中最常用的内存分配操作程序为::operator new(std::size_t)， 当分配失败时，会抛出std::bad_alloc。新的分配操作程序也有不抛出错误的版本::operator new(std::size_t, const std::nothrow_t&)，会给出nullptr而不抛出异常。不论何种分配操作程序，都应该有对应错误检查的功能。异常必须通过catch来处理，而nullptr也应该被检查，来避免程序的突然终止  

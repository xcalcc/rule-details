#### 概要
在访问文件（time of check，time of use）时竞态条件可能发生，这应该要避免。

#### 解释
在共享文件系统里，两个或多个进程可能访问同一个文件，从而导致竞态条件。攻击者可以在不同进程的两次访问之间更改文件，或用不同的文件代替该文件（符号或硬链接）。
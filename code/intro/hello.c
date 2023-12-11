#include <stdio.h>

int main()
{
  printf("hello, world\n");
  return 0
}

0和1 组成比特 （位）
8个位 组成字节

在 Unix系统上，从源文件到目标文件的转化是由编译器驱动程序完成的: 
gcc -o hello hello.c

hello.c 源程序（文本）          --预处理器CPP
hello.i 修改了的源程序（文本）   --编译器CCL
hello.s 汇编程序（文本）        --汇编器AS
hello.o 可重定位目标程序（二进制）--链接器LD
hello   可执行目标程序（二进制）  



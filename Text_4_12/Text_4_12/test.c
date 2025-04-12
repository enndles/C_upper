#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//大小端字节序存储
//大端字节序存储：把一个数据的高阶字节序的内容放在低地址处，把低阶字节序的内容放在高地址处   低地址  0x11 22 33 44   高地址
//小端字节序存储：把一个数据的高阶字节序的内容放在高地址处，把低阶字节序的内容放在低地址处   低地址  44 33 22 11     高地址
//
int main()
{
	int a = 1;
	if ((*(char*)&a) == 1)
		printf("小端\n");
	else
		printf("大端\n");

	return 0;
}
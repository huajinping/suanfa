/******************************************************
题目描述 
输入两个正整数a,b，输出a+b的值。 
输入 
两行，第一行a，第二行b。a和b的长度均小于1000位。 
输出 
一行，a+b的值。 
样例输入 
4 
2 
样例输出 
6
*******************************************************
算法思想：
	第一行只能接收一个数值，数值之后的输入，全被一个字符
数组吸收，键入回车才能进行下一个数值的输入。
******************************************************/
#include "stdafx.h"
#include <stdio.h>  


int main()
{
	int a, b;
	scanf("%d", &a);
	printf("\n");
	scanf("%d", &b);
	printf("\n");
	printf("a+b=%d", a + b);
	return 0;
}

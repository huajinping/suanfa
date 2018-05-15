/******************************************************************
一个整数的"反置数"指的是把该整数的每一位数字的顺序颠倒过来所得到
的另一个整数。如果一个整数的末尾是以0为结尾，那么在他的反置数当中
，这些0就被省略掉了。比如说：1245的反置数是5421，而1200的反置
数就是21。请编写一个程序，输入两个整数，然后计算这两个整数的反置
数之和sum，然后再把sum的反置数打印出来。要求：由于在本题中需要多次
去计算一个整数的反置数，因此必须把这部分代码抽象为一个函数的形式
*******************************************************************
*******************************************************************
算法思想：
	将数值先转换成字符串，通过函数获取字符串的长度，通过简单的倒置进行封装成一个函数，主函数调用三次fuzhu函数。
******************************************************************/
#include "stdAfx.h"
#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<math.h>
int fanzhi(int x){
	char c[50];
	itoa(x, c, 10);//将参数x十进制的基础上转成字符串 
	int answer = 0;
	int len = strlen(c);//获取字符串的长度 
	for (int i = len - 1; i >= 0; i--){
		if (c[i] != '0'){
			answer += (c[i] - '0')*(int)pow(10, i);
		}
	}
	return answer;
}
int main(){
	int a, b;
	printf("请输入两个正整数\n");
	scanf("%d%d", &a, &b);
	printf("sum的反制为%d", fanzhi(fanzhi(a) + fanzhi(b)));
	return 0;
}
}
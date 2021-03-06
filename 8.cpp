/**********************************************************
今盒子里有n个小球，A、B两人轮流从盒中取球，每个人都可以看到
另一个人取了多少个，也可以看到盒中还剩下多少个，并且两人都
很聪明，不会做出错误的判断。
每个人从盒子中取出的球的数目必须是：1，3，7或者8个。
轮到某一方取球时不能弃权！
A先取球，然后双方交替取球，直到取完。
被迫拿到最后一个球的一方为负方（输方） 
请编程确定出在双方都不判断失误的情况下，对于特定的初始球数，
A是否能赢？
程序运行时，从标准输入获得数据，其格式如下：
先是一个整数n(n<100)，表示接下来有n个整数。然后是n个整数，每
个占一行（整数<10000），表示初始球数。
程序则输出n行，表示A的输赢情况（输为0，赢为1）。
例如，用户输入： 
4 
1 
2 
10 
18
则程序应该输出： 
0 
1 
1 
0
****************************************************************
****************************************************************
****************************************************************
算法思想：
f(1)==0
f(2) 取1剩1，则B的f(1)为0，	f(2)==1
f(3) 取1剩2，则B的f(2)为1，	f(3)==0
f(4) 取3剩1，则B的f(1)为0，	f(4)==1
f(5) 无法使B的f等于0，		f(5)==0
f(6) 取3剩3，则B的f(3)为0，	f(6)==1
f(7)		f(7)==0
while( i>=8 && i<=14 )
			f(i)==1
…………
f(15)==1
f(16)==0
…………

  逐项推算,以15项为一个周期，并且可以用递归的方法来实现
  f(int n,int m)	n代表球数，A取球时m=1，B取球时m=-1；
  递归的底层，为f(1)和f(2)
  递归的周期为15，所以运算之前，对球数进行取余于15.
  在函数中，赢为1，输为-1，只要输出前转换即可。
***************************************************************/
#include<stdio.h>
#include<malloc.h>
int Judge(int n,int m)
{	//函数——判断理论上的胜负

	int result;	//函数返回值

	if( n%15 )	//根据周期，简化步数
		n %= 15;


	//此段是最为核心的结果
	if( n==1 )
		result = -m;
	else if( n==2 )
		result = m;
	
	
	else
	{
		//若取球后，下一步B输，
		//则理论上A赢
		if	(			Judge(n-1,-m)==1	\
			||	(n>3 && Judge(n-3,-m)==1)	\
			||	(n>7 && Judge(n-7,-m)==1)	\
			||	(n>8 && Judge(n-8,-m)==1)	)
			return 1;

		//否则，A输
		else
			return -1;
	}

	return result;
}

int main()
{
	int i;
	int a;			//判断次数
	int result = 1;	//理论结果:1赢，0输
	char str[20];	//缓冲容器
	
	
	printf("请输入判断次数:\n");
	scanf("%d",&a);	//设置判断次数


	//只允许分行输入，
	//同一行多余的输入，则被吸收
	gets(str);

	
	//申请动态空间,元素个数为a
	int *n = (int *)malloc(sizeof(int)*a);
	
	
	printf("分别输入球数：\n");
	for( i=0;i<a;i++ )
	{
		scanf("%d",&n[i]);
		gets(str);	//吸收违规的输入
	}


	printf("\n \n");
	for( i=0;i<a;i++ )
	{	//逐个输出判断的结果
		if( Judge(n[i],1)==-1 )
			result = 0;	//对函数返回值进行加工

		printf("%d \n",result);	//输出结果

		result = 1;	//为下一次判断初始化
	}


	//判断结束，释放空间，并结束程序
	free(n);
	return 0;
}
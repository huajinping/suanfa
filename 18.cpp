/********************************************************
��ŵ�����
*********************************************************
*********************************************************
ͨ���ݹ齫������ת����С���⣬���������ⶼ��ת�����ƶ��������ӵ����⡣
********************************************************/
#include<stdio.h>
inline int move(char A,char B)
{	//����ƶ�����Ŀ�ĵ�
	printf("%c-->%c \n",A,B);
	return 0;
}
int hanno(int n,char A,char B,char C)
{	//nΪ�ƶ�������AΪ��㣬BΪ�н飬CΪĿ�ĵ�
	if( n==1 )
		move(A,C);	//�ݹ���ڣ��ƶ���Ŀ�ĵ�
	else
	{
		hanno(n-1,A,C,B);	//ǰn-1��A�Ƶ�B
		move(A,C);			//�ײ�A��C
		hanno(n-1,B,A,C);	//ǰn-1��B�Ƶ�C
	}
	return 0;
}
int main()
{
	int n;
	printf("���뺺ŵ��������");
	scanf("%d",&n);
	hanno(n,'A','B','C');
	return 0;
}
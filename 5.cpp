/******************************************************
һ���߽����棬�м���һ�������Եõ�2��������
����ȶ���1�Σ��м���һ�������Եõ�3��������
�����������2�Σ��м���һ�������Եõ�5��������
��ô����������10�Σ��м���һ������õ����������أ�
*******************************************************
�㷨˼�룺
	���ҳ����ɣ���ʵÿһ����������n=2^n+1�Ĺ�ϵ��������ͨ��ѭ����д����
******************************************************/
#include "stdafx.h"
#include<stdio.h>  

int main()
{

	int cut;
	int b = 1;
	printf("�����۵�����\n");
	scanf("%d", &cut);
	for (int i = 0; i <= cut; i++){
		b = b * 2;
	}
	printf("%d", b + 1);
	return 0;
}
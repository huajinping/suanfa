/***************************************************************
625 ������ֺ��ر�625 ��ƽ������390625,�պ���ĩ3 λ��625 ������
����625,����������3 λ�������������?���д����Ѱ������������
3 λ��:����ƽ����ĩ3 λ��������ֱ������������У���С����ÿ
���ҵ�������ռ- һ�С������Ǹ�625�����Ϊ: 625
****************************************************************
�㷨˼�룺
	ͨ���������������λ�Աȣ���ͨ��ѭ��һ�����ж��Ƿ�����ͬ��
***************************************************************/
#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	for (a = 100; a<1000; a++)
	{
		b = a*a;
		c = b / 100000;
		d = (b - c * 100000) / 10000;
		e = (b - c * 100000 - d * 10000) / 1000;
		f = b - c * 100000 - d * 10000 - e * 1000;


		if (a == f)
		{
			cout << a << "*" << a << "=" << b << endl;
			cout << a << endl;
		}
	}
	return 0;
}
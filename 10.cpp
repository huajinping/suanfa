/*****************************************************************
��дһ����������һ���ַ��������Ȳ�����20����Ȼ�������ַ����ڵ�
ÿһ���ַ����д�Сд�任��������д��ĸ���Сд��Сд��ĸ��ɴ�д��
Ȼ�������µ��ַ��������
�����ʽ��
����һ���ַ�������������ַ�������ֻ����Ӣ����ĸ���������������͵�
�ַ���Ҳû�пո�
�����ʽ��
�������ת������ַ�����
(�����������)
��������:
AeDb
�������:
aEdB
******************************************************************
�㷨˼�룺
	����һ��string�Ŀ⺯����ͨ���ַ�������ʽ����forѭ�������ж��Ƿ��Сд����дת����Сд��Сдת���ɴ�д��
*****************************************************************/
#include "stdAfx.h"
#include <stdio.h>
#include <string.h>
void main()
{
	int n, i;
	char str[21];
	printf("�������ַ���:");
	scanf("%s", str);
	n = strlen(str);
	for (i = 0; i<n; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A'&&str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	printf("%s\n", str);
}
/*
���� 14681 ��и� ����

���� ��ǥ�� �Է¹����� �� ���� ��� ��и����� ����ϴ� �ڵ� �ۼ�
( (x, y)���� x, y�� ��� ����� ������� ���� => 0�϶��� �����ص��� )

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0) 
	{
		printf("1\n");
	}
	else if (x < 0 && y>0) 
	{
		printf("2\n");
	}
	else if (x < 0 && y<0)
	{
		printf("3\n");
	}
	else
	{
		printf("4\n");
	}

	return 0;
}
/*
���� 1330 �� �� ���ϱ�

�� ���� A,B�� �־������� A,B�� ���ϴ� ���α׷� �ۼ�

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a < b) 
	{
		printf("<\n");
	}
	else if (a > b) 
	{
		printf(">\n");
	}
	else 
	{
		printf("==\n");
	}

	return 0;
}
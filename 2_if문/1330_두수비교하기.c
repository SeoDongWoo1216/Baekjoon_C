/*
백준 1330 두 수 비교하기

두 정수 A,B가 주어졌을때 A,B를 비교하는 프로그램 작성

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
/*
백준 2753 윤년

연도를 입력받고 윤년이면 1, 아니면 0을 출력하는 프로그램 작성

윤년의 조건
4의 배수이면서 100의 배수가 아닐때 또는 4의 배수이면서 400의 배수일때

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int result = 0;
	scanf("%d", &a);
	if (a % 4 == 0) 
	{
		if (a % 100 != 0 || a % 400 == 0)
		{
			result = 1;
		}
	}
	printf("%d\n", result);

	
	return 0;
}
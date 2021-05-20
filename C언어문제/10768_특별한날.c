/*
백준 10768번 문제(특별한 날)
주석은 내일~
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mon;
	int day;

	scanf("%d", &mon);
	scanf("%d", &day);

	if (mon == 2 && day == 18)       // 2월 18일에 스페셜
	{
		printf("Special\n");
	}
	else if (mon < 2)                // 2월보다 작으면 무조건 Before
	{
		printf("Before");
	}
	else if (mon == 2 && day < 18)   // 2월인데 18일보다 작으면 Before
	{
		printf("Before");
	}
	else                             // 나머지는 전부 After처리
	{
		printf("After");
	}
	
	return 0;
}
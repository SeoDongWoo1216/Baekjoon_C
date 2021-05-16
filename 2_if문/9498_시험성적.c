/*
백준 9498 시험 성적

시험 점수 입력받아 각 점수 구간마다 학점을 부여하는 프로그램 작성
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	if (a >= 90 && a<=100)
	{
		printf("A\n");
	}
	else if (a>=80 && a<90)
	{
		printf("B\n");
	}
	else if (a>=70 && a<80)
	{
		printf("C\n");
	}
	else if (a >= 60 && a < 70)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}

	return 0;
}
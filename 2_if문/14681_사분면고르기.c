/*
백준 14681 사분면 고르기

점의 좌표를 입력받으면 그 점이 어느 사분면인지 출력하는 코드 작성
( (x, y)에서 x, y는 모두 양수나 음수라고 가정 => 0일때는 계산안해도됨 )

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
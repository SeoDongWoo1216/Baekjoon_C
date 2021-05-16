/*
백준 10430번 문제
오타내기 싫어서 직접 복사한거 출력했음
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int A,B,C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A*B) % C);
	printf("%d\n", ((A % C) *(B % C)) % C);

	return 0;
}
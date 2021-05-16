/*
백준 1008번 문제
두 정수 A, B를 입력받고 A/B를 출력하는 프로그램 작성

(double)(a/b)라고 적으면 틀렸다고뜨는데
a, b가 int이고 정수 나누기로 계산한 뒤, 그 결과만 실수형으로 변환하기때문
=> 소수점 아래를 버리게되서 원하는 값이 안뜸

(double) a/b 라고 적으면 a가 먼저 실수형이되서
C 사칙연산에 의해 b도 실수형이되서 소수점 아래까지 답을 얻을 수 있다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);


	printf("%.9f\n", (double)a/b);
	return 0;
}
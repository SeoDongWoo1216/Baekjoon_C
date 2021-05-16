/*
백준 2588 문제(곱셈)
(세자리수) * (세자리수) 곱셈에서 중간과정의 곱셈을 출력하는 문제

나머지 연산을 이용해서 input2의 숫자를 하나씩 빼서 쓰는게 포인트
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int input1;
	int input2;
	
	scanf("%d", &input1);
	scanf("%d", &input2);

	int a = input2 % 10;
	int b = (input2 / 10 ) % 10;
	int c = (input2 / 100) % 10;

	printf("%d\n", input1 * a);
	printf("%d\n", input1 * b);
	printf("%d\n", input1 * c);
	printf("%d\n", input1 * input2);

	return 0;
}
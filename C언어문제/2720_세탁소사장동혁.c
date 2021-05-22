/*
백준 2720 세탁소 사장 동혁

거스름돈(change)가 주어지면 동전의 단위를 계산해서 최소의 개수를 구하는 문제
큰 값부터 몫을 출력하고 나머지 연산으로 나누면서 거슬러줘야할 동전의 개수를 출력
(주석에는 124 넣었을때를 예시로 들고있음)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int change;
	int input;
	scanf("%d", &input);            // 테스트 케이스 횟수 입력

	while (input--)                 // 테스트 케이스 만큼 반복
	{
		scanf("%d", &change);       // 거스름 돈 입력(124)

		printf("%d", change / 25);  // 25로 나눈 몫 출력('4' 출력)
		change %= 25;               // 나머지 연산으로 25센트로 빠진 값을 대입(24)


		printf(" %d", change / 10); // 10으로 나눈 몫 출력(' 2' 출력)
		change %= 10;               // 10센트 빠진 값을 대입(4 대입)


		printf(" %d", change / 5);  // 5로 나눈 몫 출력(' 0' 출력)
		change %= 5;                // 5센트 빠진 값을 대입(4 대입)


		printf(" %d\n", change);    // 다 빠진값이므로 그대로 출력(' 4' 출력)
	}
	return 0;
}
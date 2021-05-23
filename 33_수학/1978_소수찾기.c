/*
백준 1978번 문제 소수찾기
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int input;
	int iarr[101];
	int inum;
	int temp = 0;

	scanf("%d", &input);                 // 테스트 케이스 횟수 입력

	for (int i = 0; i < input; i++) 
	{
		int flag = 1;
		scanf("%d", &inum);              // 판별할 숫자 입력
		if (inum == 1) 
		{
			continue;
		}

		for (int j = 2; j < inum; j++)   // 소수 판별
		{
			if (inum % j == 0) 
			{
				flag = 0;
			}
			
		}

		if (flag == 1)                   // 안나누어 떨어졌으면 flag가 그대로 1이므로=>소수이므로 temp++
		{
			temp++;
		}
	}

	printf("%d\n", temp);

	return 0;
}
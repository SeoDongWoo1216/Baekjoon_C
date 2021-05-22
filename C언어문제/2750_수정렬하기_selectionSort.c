/*
백준 2750번 문제 (수 정렬하기)
N개의 수가 주어졌을때, 이를 오름차순으로 정렬하는 문제
-> 선택정렬 사용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input;
	int iarr[1001] = { 0 };
	int temp = 0;

	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		scanf("%d", &iarr[i]);
	}

	// 선택정렬
	for (int i = 0; i < input; i++) 
	{
		int min = i;
		for (int j = i + 1; j < input; j++) 
		{
			if (iarr[min] > iarr[j])
			{
				min = j;
			}
		}
		temp = iarr[min];
		iarr[min] = iarr[i];
		iarr[i] = temp;
	}

	// 정렬한 배열 출력
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", iarr[i]);
	}
	return 0;
}
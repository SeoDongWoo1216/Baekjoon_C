#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		for (int k = input; k > i + 1; k--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, output = 0;
	scanf("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		printf("%d\n", output + i);
	}
}
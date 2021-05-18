#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, output = 0;
	scanf("%d", &input);

	for (int i = input; i > 0; i--)
	{
		printf("%d\n", output + i);
	}
}
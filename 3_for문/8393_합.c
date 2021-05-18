#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	int output = 0;
	int j = 0;
	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		output++;
		j += output;
	}
	printf("%d", j);

	return 0;
}
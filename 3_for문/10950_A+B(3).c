#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int testCase = 0;
	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		int input1, input2 = 0;
		scanf("%d %d", &input1, &input2);
		printf("%d\n", input1 + input2);
	}
}
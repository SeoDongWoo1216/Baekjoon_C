#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int result = a * b * c;

	int iarr[10] = { 0 };

	while (result)
	{
		int temp = 0;
		temp = result % 10;
		result = result / 10;
		iarr[temp]++;

	}

	for (int i = 0; i < sizeof(iarr) / sizeof(iarr[0]); i++)
	{
		printf("%d\n", iarr[i]);
	}

	return 0;
}
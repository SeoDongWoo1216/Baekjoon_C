// 첫째줄 : 개수, 숫자 입력
// 둘째줄 : 개수만큼의 숫자 입력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x[10000];
	int a, b;
	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++) 
	{
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < a; i++) 
	{
		if (b > x[i]) 
		{
			printf("%d ", x[i]);
		}
	}

	return 0;
}
/*
���� 2753 ����

������ �Է¹ް� �����̸� 1, �ƴϸ� 0�� ����ϴ� ���α׷� �ۼ�

������ ����
4�� ����̸鼭 100�� ����� �ƴҶ� �Ǵ� 4�� ����̸鼭 400�� ����϶�

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int result = 0;
	scanf("%d", &a);
	if (a % 4 == 0) 
	{
		if (a % 100 != 0 || a % 400 == 0)
		{
			result = 1;
		}
	}
	printf("%d\n", result);

	
	return 0;
}
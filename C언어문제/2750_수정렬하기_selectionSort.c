/*
���� 2750�� ���� (�� �����ϱ�)
N���� ���� �־�������, �̸� ������������ �����ϴ� ����
-> �������� ���
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

	// ��������
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

	// ������ �迭 ���
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", iarr[i]);
	}
	return 0;
}
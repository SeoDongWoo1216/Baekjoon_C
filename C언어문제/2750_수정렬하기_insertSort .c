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
	for (int i = 1; i < input; i++) 
	{
		for (int j = i; j > 0; j--) 
		{
			if (iarr[j] < iarr[j - 1])
			{
				temp = iarr[j];
				iarr[j] = iarr[j - 1];
				iarr[j - 1] = temp;
			}
		}
	}

	// ������ �迭 ���
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", iarr[i]);
	}
	return 0;
}

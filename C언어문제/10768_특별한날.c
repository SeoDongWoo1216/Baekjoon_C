/*
���� 10768�� ����(Ư���� ��)
�ּ��� ����~
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mon;
	int day;

	scanf("%d", &mon);
	scanf("%d", &day);

	if (mon == 2 && day == 18)       // 2�� 18�Ͽ� �����
	{
		printf("Special\n");
	}
	else if (mon < 2)                // 2������ ������ ������ Before
	{
		printf("Before");
	}
	else if (mon == 2 && day < 18)   // 2���ε� 18�Ϻ��� ������ Before
	{
		printf("Before");
	}
	else                             // �������� ���� Afteró��
	{
		printf("After");
	}
	
	return 0;
}
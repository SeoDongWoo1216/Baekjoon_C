/*
���� 1978�� ���� �Ҽ�ã��
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int input;
	int iarr[101];
	int inum;
	int temp = 0;

	scanf("%d", &input);                 // �׽�Ʈ ���̽� Ƚ�� �Է�

	for (int i = 0; i < input; i++) 
	{
		int flag = 1;
		scanf("%d", &inum);              // �Ǻ��� ���� �Է�
		if (inum == 1) 
		{
			continue;
		}

		for (int j = 2; j < inum; j++)   // �Ҽ� �Ǻ�
		{
			if (inum % j == 0) 
			{
				flag = 0;
			}
			
		}

		if (flag == 1)                   // �ȳ����� ���������� flag�� �״�� 1�̹Ƿ�=>�Ҽ��̹Ƿ� temp++
		{
			temp++;
		}
	}

	printf("%d\n", temp);

	return 0;
}
/*
���� 2869�� �����̴� �ö󰡰�ʹ�
�翬�ϰ� �ݺ��������� Ǯ���µ� �ð��ʰ����߱淡 ������ Ǯ����ϴ� ����.
a��ŭ �ö󰡼� b��ŭ ���������� a��ŭ �ö����� c�� ���������� ���� b��ŭ ���������ʾƵ��Ǵ� ���̽��� �����ؾ��ϴ� ������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a;  // ���� �ö󰡴� ����
	int b;  // �㿡 �������� ����
	int c;  // ����� ����
	scanf("%d %d %d", &a, &b, &c);
	int temp = 0;
	int count = 0;

	// �̴�� while������ �ð��ʰ��� ����
	/*while (1) 
	{
		temp += a;
		count++;
		if (temp >= c) 
		{
			break;
		}
		temp -= b;
	}*/
	
	count = (c - b - 1) / (a - b) + 1;

	printf("%d\n", count);
	return 0;
}
/*
���� 2588 ����(����)
(���ڸ���) * (���ڸ���) �������� �߰������� ������ ����ϴ� ����

������ ������ �̿��ؼ� input2�� ���ڸ� �ϳ��� ���� ���°� ����Ʈ
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int input1;
	int input2;
	
	scanf("%d", &input1);
	scanf("%d", &input2);

	int a = input2 % 10;
	int b = (input2 / 10 ) % 10;
	int c = (input2 / 100) % 10;

	printf("%d\n", input1 * a);
	printf("%d\n", input1 * b);
	printf("%d\n", input1 * c);
	printf("%d\n", input1 * input2);

	return 0;
}
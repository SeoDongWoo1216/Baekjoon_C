/*
���� 4999�� ��!
�̰� �ּ��� ����~
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 0;
	int b = 0;
	char myAh[1001];     // �ִ� ũ���� �迭 ����
	char DocAh[1001];

	scanf("%s", myAh);   // ��ȯ�̿� �ǻ��� aah(���ڿ�) �Է�
	scanf("%s", DocAh);

	// while���� 0�϶� �ݺ����� ������ => NULL�϶� �ݺ����� ������.
	// ���ڿ��� �ǳ��� NULL�̹Ƿ� NULL�϶����� while���� ����
	while (myAh[++a]);    
	while (DocAh[++b]);

	// ��ȯ���� aah�� �ǻ��� aah�� ���� ���Ŀ� go, no ���
	if (a >= b) 
	{
		printf("go");
	}
	else 
	{
		printf("no");
	}

	return 0;
}
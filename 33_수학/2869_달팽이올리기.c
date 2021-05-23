/*
백준 2869번 달팽이는 올라가고싶다
당연하게 반복문돌려서 풀었는데 시간초과가뜨길래 식으로 풀어야하는 문제.
a만큼 올라가서 b만큼 떨어지지만 a만큼 올라갔을때 c에 도달했으면 굳이 b만큼 떨어지지않아도되는 케이스를 생각해야하는 문제임.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a;  // 낮에 올라가는 높이
	int b;  // 밤에 떨어지는 높이
	int c;  // 막대기 높이
	scanf("%d %d %d", &a, &b, &c);
	int temp = 0;
	int count = 0;

	// 이대로 while문쓰면 시간초과로 실패
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
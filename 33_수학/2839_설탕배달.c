/*
백준 2839문제 (설탕 배달)
정수 input을 받았을때 3, 5의 조합으로 최대한 적은 봉지의 개수를 구하는 문제
ex) 18키로그램 설탕이면 3키로 봉지 6개가 되지만
    5키로 봉지 3개, 3킬로 봉지 1개인 총 4개로 더 적은 개수의 봉지를 배달할 수 있음.

1. 5의 배수이면 제일 최소의 봉지 개수이므로 5로 나눈 몫을 출력
2. 5의 배수가아니면 5의 배수가 될때까지 -3을 해줌(이때 count를 ++해줌 => -3을 해주는건 3키로 봉지가 1개가 필요하단 뜻임) 
3. -3을 했는데 -1, -2, 0이되면 3, 5조합으로 나누어 떨어지지않으므로 -1을 출력
4. 마지막 출력에 5의 배수일때의 값과 count를 더한 값을 출력.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;  // 입력
	scanf("%d", &input);
	int result = 0;
	int count = 0;

	while (1)
	{
		if (input % 5 == 0)      // 5의 배수일때 가장 최소이므로 출력
		{
			result = input / 5;
			break;
		}
		else if (input <= 0)     // -3을통해 -1, -2, 0이면 3, 5, 8, 11, 13 의 배수가 아니므로 -1반환
		{
			result = -1;
			count = 0;
			break;
		}

		input = input - 3;       // -3을 해주고 다시 반복
		count++;                 // -3해주는건 3키로 봉지가 필요하다는 뜻이므로 ++을 해줌

		//printf("3키로 봉지 카운트 : %d\n", count);
	}
	printf("%d\n", result + count);

	//printf("5키로 봉지 : %d개\n", result);
	//printf("필요한 설탕 봉지 : %d개\n", result + count);

	return 0;
}

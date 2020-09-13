// 문제 18번) 주어진 수가 1이 될때까지 다음 작업을 반복하면, 모든 수를 1로 만들어 보자.
// 조건) 1. 입력된 수가 짝수라면 2로 나눈다.
//       2. 입력된 수가 홀수라면 3을 곱하고 1을 더한다.
//       3. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복한다.
//       4. 500번 반복해도 1이 되지 않으면 -1 리턴
// ex) num = 6, 6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1, result = 8

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int n;
	int count = 0;

	printf("수를 입력하시오. : ");
	scanf("%d", &n);

	while (n != 1)
	{

		if (count == 500)
		{
			count = -1;
			break;
		}

		else if (n % 2 == 0)
		{
			n = n / 2;
			count++;
		}

		else
		{
			n = (n * 3) + 1;
			count++;
		}
	}

	printf("%d", count);
}
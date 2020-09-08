// 문제 3) 두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 리턴하는 함수를 완성하세요
// ex) a = 3, b = 5 -> 3 + 4 + 5 = 12

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	int a, b;
	int answer = 0;

	printf("정수 a를 입력하시오 : ");
	scanf_s("%d", &a);

	printf("정수 b를 입력하시오 : ");
	scanf_s("%d", &b);

	if (a == b)
	{
		printf("%d", a);
	}

	else if (a > b)
	{
		for (b; b <= a; b++)
		{
			answer += b;
		}

		printf("%d", answer);
	}

	else
	{
		for (a; a <= b; a++)
		{
			answer += a;
		}

		printf("%d", answer);
	}
}
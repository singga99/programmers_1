// 문제 16번) 임의의 양의 정수 n에 대해, n이 어떤 양의 정수 x의 제곱근인지 아닌지 판단하려 한다.
//            n이 양의 정수 x의 제곱이라면 x + 1의 제곱 리턴
//            n이 양의 정수 x의 제곱이 아니라면 -1 리턴

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	int x;

	printf("양의 정수를 입력하시오. : ");
	scanf("%d", &n);

	int num = sqrt(n);

	if (num * num == n)
	{
		x = (num + 1) * (num + 1);
	}

	else
	{
		x = -1;
	}

	printf("%d\n", x);
}
// 문제 15번) 자연수 N이 주어지면, N의 각 자릿수의 합을 구해서 리턴하는 함수를 만드시오
// ex) N = 123 -> 1 + 2 + 3 = 6

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int N, num;
	int i = 0;
	int sum = 0;

	printf("수를 입력하시오 : ");
	scanf("%d", &N);

	while (N != 0)
	{
		num = N % 10;
		N = N / 10;
		sum += num;
		i++;
	}

	printf("%d", sum);
}
// 문제 2) 정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수를 완성하시오

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("Even");
	}

	else
	{
		printf("Odd");
	}
}
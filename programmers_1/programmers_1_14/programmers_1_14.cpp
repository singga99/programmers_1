// 문제 14번) 전화번호가 문자열 phone_number로 주어졌을 때, 전화번호의 뒷 4자리를 제외한 나머지 숫자를 전부 *로 가리시오

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char phone_number[15];

	printf("-를 제외하고 전화번호를 입력하시오 : ");
	scanf("%s", &phone_number);

	int length = strlen(phone_number);

	for (int i = 0; i < length - 4; i++)
	{
		phone_number[i] = '*';
	}

	printf("%s", phone_number);
}
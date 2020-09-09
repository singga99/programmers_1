// 문제 4) 문자열 s에 나타나는 문자를 큰 것부터 작은 순으로 정렬해 새로운 문자열을 리턴하는 함수를 완성하시오.
//         s는 영문 대소문자로만 구성되어있고, 대문자는 소문자보다 작은 것으로 간주됨

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* 방법 1) 미리 문자 입력해두기
int main()
{
	char s[] = { "Zbcdefg" };

	// s의 길이
	int slen = strlen(s);

	// 교환할 때 사용하는 임시 변수
	int temp = 0;

	// 버블 정렬
	for (int i = 0; i < slen; i++)
	{
		for (int j = 0; j < slen - 1 - i; j++)
		{
			if (s[j] < s[j + 1])
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < slen; i++)
	{
		// %c : 문자 하나하나 출력
		printf("%c", s[i]);
	}
}
*/

// 방법 2) 문자 입력받기
int main()
{
	char s[20];

	printf("문자를 입력해주세요 : ");
	scanf("%s", &s);

	// s의 길이
	int slen = strlen(s);

	// 교환할 때 사용하는 임시 변수
	int temp = 0;

	for (int i = 0; i < slen; i++)
	{
		for (int j = 0; j < slen - 1 - i; j++)
		{
			if (s[j] < s[j + 1])
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < slen; i++)
	{
		// %c : 문자 하나하나 출력
		printf("%c", s[i]);
	}
}

// 방법 3) 동적 할당
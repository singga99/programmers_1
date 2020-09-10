// 문제 5) 문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수를 완성하시오.
// ex) s가 "a234"이면 False 리턴, "1234"이면 "True" 리턴

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int answer = 1;
	char s[] = { "1234" };

	int slen = strlen(s);

	if (slen == 4 || slen == 6)
	{
		for (int i = 0; i < slen; i++)
		{
			answer = isdigit(s[i]);
			answer = answer * isdigit(s[i]);
		}

		if (answer == 0)
		{
			printf("false");
		}

		else
		{
			printf("true");
		}
	}

	else
	{
		printf("false");
	}
}
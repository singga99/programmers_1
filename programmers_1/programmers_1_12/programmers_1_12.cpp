// 문제 12번) 문자열 s는 한 개 이상의 단어로 구성되어있다. 각 단어는 하나 이상의 공백문자로 구분되어 있다.
//            각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수를 완성하시오

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[] = "try hello world";
	char* s_arr[5];

	int n = 0;

	char* word = strtok(s, " ");

	while (word != NULL)
	{
		s_arr[n] = word;
		n++;

		word = strtok(NULL, " ");
	}

	
	for (int i = 0; i < 5; i++)
	{
		if (s_arr[i] != NULL)
		{
			printf("%s\n", s_arr[i]);
		}
	}

}
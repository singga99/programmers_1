// ���� 12��) ���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ��ִ�. �� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ִ�.
//            �� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�, Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ��� �ϼ��Ͻÿ�

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
// ���� 12��) ���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ��ִ�. �� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ִ�.
//            �� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�, Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ��� �ϼ��Ͻÿ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int count = 0;
	char s[] = "try hello world";
	
	int slen = strlen(s);

	for (int i = 0; i < slen; i++)
	{
		if (s[i] == ' ')
		{
			count = 1;
		}

		if (count % 2 == 0)
		{
			s[i] = s[i] - 32;
		}

		count++;
	}

	printf("%s", s);
}
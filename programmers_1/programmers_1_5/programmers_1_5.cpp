// ���� 5) ���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ��� �ϼ��Ͻÿ�.
// ex) s�� "a234"�̸� False ����, "1234"�̸� "True" ����

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
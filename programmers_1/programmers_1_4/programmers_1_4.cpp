// ���� 4) ���ڿ� s�� ��Ÿ���� ���ڸ� ū �ͺ��� ���� ������ ������ ���ο� ���ڿ��� �����ϴ� �Լ��� �ϼ��Ͻÿ�.
//         s�� ���� ��ҹ��ڷθ� �����Ǿ��ְ�, �빮�ڴ� �ҹ��ں��� ���� ������ ���ֵ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* ��� 1) �̸� ���� �Է��صα�
int main()
{
	char s[] = { "Zbcdefg" };

	// s�� ����
	int slen = strlen(s);

	// ��ȯ�� �� ����ϴ� �ӽ� ����
	int temp = 0;

	// ���� ����
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
		// %c : ���� �ϳ��ϳ� ���
		printf("%c", s[i]);
	}
}
*/

// ��� 2) ���� �Է¹ޱ�
int main()
{
	char s[20];

	printf("���ڸ� �Է����ּ��� : ");
	scanf("%s", &s);

	// s�� ����
	int slen = strlen(s);

	// ��ȯ�� �� ����ϴ� �ӽ� ����
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
		// %c : ���� �ϳ��ϳ� ���
		printf("%c", s[i]);
	}
}

// ��� 3) ���� �Ҵ�
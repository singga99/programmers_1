// ���� 8) �ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ��� �����ÿ�.
//         �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[] = { "abcdefg" };
	
	int slen = strlen(s);
	int mid = slen / 2;

	if (slen % 2 == 1)
	{
		printf("%c", s[mid]);
	}

	if (slen % 2 == 0)
	{
		printf("%c%c", s[mid - 1], s[mid]);
	}
}
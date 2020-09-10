// 문제 8) 단어 s의 가운데 글자를 반환하는 함수를 만들어보시오.
//         단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

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
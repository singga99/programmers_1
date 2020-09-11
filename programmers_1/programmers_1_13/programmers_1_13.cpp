// 문제 13번) 문자열 s를 숫자로 변환한 결과를 반환하는 함수를 완성하시오

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	char s[] = { "1234" };

	// atoi() : char to int(문자열 -> 정수) 
	int num = atoi(s);

	printf("%d\n", num);
}
// 문제 11번) 길이가 n이고, "수박수박수박수...."와 같은 패턴을 유지하는 문자열을 리턴하는 함수를 완성하시오.
// ex) n이 4이면 "수박수박"을 리턴, 3이면 "수박수" 리턴

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	// 한글 한 글자당 2byte 
	char a[] = "수박";
	char b[100];
	
	printf("문자의 길이를 입력하시오. : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n * 2; i = i + 4)
	{
		b[i + 0] = a[0];
		b[i + 1] = a[1];
		b[i + 2] = a[2];
		b[i + 3] = a[3];
	}

	for (int i = 0; i < n * 2; i++)
	{
		printf("%c", b[i]);
	}
}
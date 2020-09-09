// 문제 7) 표준 입력으로 두 개의 정수 n과 m이 주어진다.
//         별(*) 문자를 이용해 가로의 길이가 n, 세로의 길이가 m인 직사각형 형태를 출력하시오.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int n;
	int m;

	printf("가로의 길이(n)을 입력하시오 : ");
	scanf_s("%d", &n);

	printf("세로의 길이(m)을 입력하시오 : ");
	scanf_s("%d", &m);

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
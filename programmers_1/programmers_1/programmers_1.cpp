// 문제 1) 정수 n을 입력받아 n의 약수를 모두 더한 값을 return 하는 함수를 완성해주세요.
// n은 0이상 3000이하인 정수입니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	int n;
	int answer = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			answer += i;
		}
	}
	printf("%d", answer);
}
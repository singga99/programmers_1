// 문제 6) 정수를 담고 있는 배열 arr의 평균값을 리턴하는 함수를 완성하시오.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int count = 0;
	int arr[10];

	double average;

	for (int i = 0; i < 10; i++)
	{
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &arr[i]);
		sum += arr[i];
		count++;

		if (arr[i] == 0)
		{
			count--;
			printf("숫자는 배열 %d번째 칸까지 채워져 있습니다.\n", count);
			break;
		}
	}

	average = (double)sum / count;

	printf("배열의 평균 값은 %f입니다.\n", average);
}
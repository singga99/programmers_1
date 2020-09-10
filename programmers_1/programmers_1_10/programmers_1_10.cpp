// 문제 10) 양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 한다. 자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수를 완성하시오.
// ex) 18 -> 1 + 8 = 9, 18은 9로 나누어 떨어짐 -> 하샤드 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num;
	int x;
	int i = 0;
	int sum = 0;
	int arr[10];

	printf("x를 입력하시오. :");
	scanf_s("%d", &x);

	int y = x;

	while (y != 0)
	{
		num = y % 10;
		y = y / 10;
		arr[i] = num;
		i++;

		//추가하기 
		sum += arr[i];
	}

	if (x % sum == 0)
	{
		printf("%d의 모든 자릿수의 합은 %d입니다. \n%d은 %d로 나누어 떨어지므로 %d는 하샤드 수입니다.\n", x, sum, x, sum, x);
	}
	else
	{
		printf("%d의 모든 자릿수의 합은 %d입니다. \n%d은 %d로 나누어 떨어지지지 않으므로 %d는 하샤드 수가 아닙니다.\n", x, sum, x, sum, x);
	}
}
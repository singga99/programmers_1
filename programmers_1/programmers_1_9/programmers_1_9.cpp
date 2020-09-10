// 문제 9) 자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴하시오.
// ex) n이 12345 -> [5, 4, 3, 2, 1]

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	int n = 1234;
	int back_num;
	int arr[10];

	while (n != 0)
	{
		back_num = n % 10;
		n = n / 10;
		arr[i] = back_num;
		i++;
	}

	printf("[%d, %d, %d, %d]", arr[0], arr[1], arr[2], arr[3]);
}
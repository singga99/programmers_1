// ���� 9) �ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �����Ͻÿ�.
// ex) n�� 12345 -> [5, 4, 3, 2, 1]

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
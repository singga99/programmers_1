// ���� 10) ���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �Ѵ�. �ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ��� �ϼ��Ͻÿ�.
// ex) 18 -> 1 + 8 = 9, 18�� 9�� ������ ������ -> �ϻ��� ��

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

	printf("x�� �Է��Ͻÿ�. :");
	scanf_s("%d", &x);

	int y = x;

	while (y != 0)
	{
		num = y % 10;
		y = y / 10;
		arr[i] = num;
		i++;

		//�߰��ϱ� 
		sum += arr[i];
	}

	if (x % sum == 0)
	{
		printf("%d�� ��� �ڸ����� ���� %d�Դϴ�. \n%d�� %d�� ������ �������Ƿ� %d�� �ϻ��� ���Դϴ�.\n", x, sum, x, sum, x);
	}
	else
	{
		printf("%d�� ��� �ڸ����� ���� %d�Դϴ�. \n%d�� %d�� ������ ���������� �����Ƿ� %d�� �ϻ��� ���� �ƴմϴ�.\n", x, sum, x, sum, x);
	}
}
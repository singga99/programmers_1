// ���� 15��) �ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� �����ϴ� �Լ��� ����ÿ�
// ex) N = 123 -> 1 + 2 + 3 = 6

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int N, num;
	int i = 0;
	int sum = 0;

	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &N);

	while (N != 0)
	{
		num = N % 10;
		N = N / 10;
		sum += num;
		i++;
	}

	printf("%d", sum);
}
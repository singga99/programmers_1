// ���� 16��) ������ ���� ���� n�� ����, n�� � ���� ���� x�� ���������� �ƴ��� �Ǵ��Ϸ� �Ѵ�.
//            n�� ���� ���� x�� �����̶�� x + 1�� ���� ����
//            n�� ���� ���� x�� ������ �ƴ϶�� -1 ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	int x;

	printf("���� ������ �Է��Ͻÿ�. : ");
	scanf("%d", &n);

	int num = sqrt(n);

	if (num * num == n)
	{
		x = (num + 1) * (num + 1);
	}

	else
	{
		x = -1;
	}

	printf("%d\n", x);
}
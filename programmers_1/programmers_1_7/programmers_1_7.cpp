// ���� 7) ǥ�� �Է����� �� ���� ���� n�� m�� �־�����.
//         ��(*) ���ڸ� �̿��� ������ ���̰� n, ������ ���̰� m�� ���簢�� ���¸� ����Ͻÿ�.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int n;
	int m;

	printf("������ ����(n)�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	printf("������ ����(m)�� �Է��Ͻÿ� : ");
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
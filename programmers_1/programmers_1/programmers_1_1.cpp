// ���� 1) ���� n�� �Է¹޾� n�� ����� ��� ���� ���� return �ϴ� �Լ��� �ϼ����ּ���.
// n�� 0�̻� 3000������ �����Դϴ�.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	int n;
	int answer = 0;

	printf("���� �Է� : ");
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
// ���� 1) ���� n�� �Է¹޾� n�� ����� ��� ���� ���� return �ϴ� solution �Լ��� �ϼ����ּ���.
// n�� 0�̻� 3000������ �����Դϴ�.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int n;

int solution()
{
	int answer = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			answer += i;
		}
	}
	return answer;
}

void main()
{
	printf("���� �Է� : ");
	scanf_s("%d", &n);

	int sol = solution();
	printf("%d", sol);
}
// ���� 3) �� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ��� �ϼ��ϼ���
// ex) a = 3, b = 5 -> 3 + 4 + 5 = 12

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	int a, b;
	int answer = 0;

	printf("���� a�� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);

	printf("���� b�� �Է��Ͻÿ� : ");
	scanf_s("%d", &b);

	if (a == b)
	{
		printf("%d", a);
	}

	else if (a > b)
	{
		for (b; b <= a; b++)
		{
			answer += b;
		}

		printf("%d", answer);
	}

	else
	{
		for (a; a <= b; a++)
		{
			answer += a;
		}

		printf("%d", answer);
	}
}
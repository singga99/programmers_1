// ���� 2) ���� num�� ¦���� ��� "Even"�� ��ȯ�ϰ� Ȧ���� ��� "Odd"�� ��ȯ�ϴ� �Լ��� �ϼ��Ͻÿ�

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("Even");
	}

	else
	{
		printf("Odd");
	}
}
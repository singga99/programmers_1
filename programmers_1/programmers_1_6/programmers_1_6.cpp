// ���� 6) ������ ��� �ִ� �迭 arr�� ��հ��� �����ϴ� �Լ��� �ϼ��Ͻÿ�.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int count = 0;
	int arr[10];

	double average;

	for (int i = 0; i < 10; i++)
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &arr[i]);
		sum += arr[i];
		count++;

		if (arr[i] == 0)
		{
			count--;
			printf("���ڴ� �迭 %d��° ĭ���� ä���� �ֽ��ϴ�.\n", count);
			break;
		}
	}

	average = (double)sum / count;

	printf("�迭�� ��� ���� %f�Դϴ�.\n", average);
}
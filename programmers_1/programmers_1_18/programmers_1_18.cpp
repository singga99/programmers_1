// ���� 18��) �־��� ���� 1�� �ɶ����� ���� �۾��� �ݺ��ϸ�, ��� ���� 1�� ����� ����.
// ����) 1. �Էµ� ���� ¦����� 2�� ������.
//       2. �Էµ� ���� Ȧ����� 3�� ���ϰ� 1�� ���Ѵ�.
//       3. ����� ���� ���� ���� �۾��� 1�� �� ������ �ݺ��Ѵ�.
//       4. 500�� �ݺ��ص� 1�� ���� ������ -1 ����
// ex) num = 6, 6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1, result = 8

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int n;
	int count = 0;

	printf("���� �Է��Ͻÿ�. : ");
	scanf("%d", &n);

	while (n != 1)
	{

		if (count == 500)
		{
			count = -1;
			break;
		}

		else if (n % 2 == 0)
		{
			n = n / 2;
			count++;
		}

		else
		{
			n = (n * 3) + 1;
			count++;
		}
	}

	printf("%d", count);
}
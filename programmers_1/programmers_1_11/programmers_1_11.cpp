// ���� 11��) ���̰� n�̰�, "���ڼ��ڼ��ڼ�...."�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ��� �ϼ��Ͻÿ�.
// ex) n�� 4�̸� "���ڼ���"�� ����, 3�̸� "���ڼ�" ����

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	// �ѱ� �� ���ڴ� 2byte 
	char a[] = "����";
	char b[100];
	
	printf("������ ���̸� �Է��Ͻÿ�. : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n * 2; i = i + 4)
	{
		b[i + 0] = a[0];
		b[i + 1] = a[1];
		b[i + 2] = a[2];
		b[i + 3] = a[3];
	}

	for (int i = 0; i < n * 2; i++)
	{
		printf("%c", b[i]);
	}
}
// ���� 14��) ��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� *�� �����ÿ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char phone_number[15];

	printf("-�� �����ϰ� ��ȭ��ȣ�� �Է��Ͻÿ� : ");
	scanf("%s", &phone_number);

	int length = strlen(phone_number);

	for (int i = 0; i < length - 4; i++)
	{
		phone_number[i] = '*';
	}

	printf("%s", phone_number);
}
// ���� 13��) ���ڿ� s�� ���ڷ� ��ȯ�� ����� ��ȯ�ϴ� �Լ��� �ϼ��Ͻÿ�

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	char s[] = { "1234" };

	// atoi() : char to int(���ڿ� -> ����) 
	int num = atoi(s);

	printf("%d\n", num);
}
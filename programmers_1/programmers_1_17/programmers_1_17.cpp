 // ���� 17��) 2016�� 1�� 1���� �ݿ����̴�. 2016�� a�� b���� ���� �����ϱ�?
 //           �� �� a, b�� �Է¹޾� 2016�� a�� b���� ���� �������� �����Ͽ���.
 // ex) a = 5, b = 24, 5�� 24���� ȭ���� -> "TUE" ����
// ����) 2016���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int sum = 0;
    int x = 0;
    
    int month[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
    char day[][7] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

    printf("���� �Է��Ͻÿ�. : ");
    scanf("%d", &a);

    printf("���� �Է��Ͻÿ�. : ");
    scanf("%d", &b);

    for (int i = 0; i < a; i++)
    {
        sum += month[i];
    }

    sum += b - 1;

    x = sum % 7;

    printf("%s", day[x]);
}
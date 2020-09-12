 // 문제 17번) 2016년 1월 1일은 금요일이다. 2016년 a월 b일은 무슨 요일일까?
 //           두 수 a, b를 입력받아 2016년 a월 b일이 무슨 요일인지 리턴하여라.
 // ex) a = 5, b = 24, 5월 24일은 화요일 -> "TUE" 리턴
// 조건) 2016년은 윤년

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

    printf("월을 입력하시오. : ");
    scanf("%d", &a);

    printf("일을 입력하시오. : ");
    scanf("%d", &b);

    for (int i = 0; i < a; i++)
    {
        sum += month[i];
    }

    sum += b - 1;

    x = sum % 7;

    printf("%s", day[x]);
}
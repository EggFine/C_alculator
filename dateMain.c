#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"

int input_Check();
extern int select;

// ���ڼ��㷽��
int part_Date_Main()
{
    // Ԥ���� [��] [��] [��] ����
    int year, month, day, year_add, month_add, day_add;
    printf("�ѽ������ڼ���������\n");
    printf("\n\n\n\n");
    printf("============== ���ڼ��� ==============\n");
    printf("�ȴ����� [���]...");
    scanf("%d", &year);
    printf("�ȴ����� [�·�]...");
    scanf("%d", &month);
    input_Check(0,month);
    printf("�ȴ����� [����]...");
    scanf("%d", &day);
    printf("�ȴ����� [�Ƴ�����]...");
    scanf("%d", &day_add);
    // ��ʼ�������
    year += year_add;
    // ��ʼ�����·�
    month += month_add;
    while (month > 12)
    {
        month -= 12;
        year++;
    }
    if (month == 0)
    {
        month++;
    }
    // ��ʼ������
    day += day_add;
    int day_cut;
    while (day > day_cut)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            day_cut = 31;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            day_cut = 30;
        }
        else if (month == 2)
        {
            if (year % 4 == 0 && year % 100 != 0)
            {
                day_cut = 29;
            }
            else
            {
                day_cut = 28;
            }
        }
        day -= day_cut;
        month++;
    }
    if (day == 0)
    {
        day++;
    }

    // ������� ���
    printf("%d.%d.%d", year, month, day);
    getchar();
}
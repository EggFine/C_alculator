#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"
extern int select;
extern int wait();
extern int input_Check();

int check_month();

// Ԥ���� [��] [��] [��] ����
int year, month, day, week_add, day_add,day_cut;

int dateAdd(){
    printf("�ȴ����� [��ʼ���(*y)]...");
    scanf("%d", &year);
    input_Check(1, year);
    printf("�ȴ����� [��ʼ�·�(*m)]...");
    scanf("%d", &month);
    input_Check(0, month);
    printf("�ȴ����� [��ʼ����(*d)]...");
    scanf("%d", &day);
    printf("�ȴ����� [�Ƴ�����(*7d)]...");
    scanf("%d", &week_add);
    printf("�ȴ����� [�Ƴ�����(*d)]...");
    scanf("%d", &day_add);

    // ��ʼ������
    //�Ȱ����ڶ�������˳����������������Ҳ����ȥ
    day += day_add + week_add * 7;
    //��ʼ���·ݼ������Խ��е�һ���ж�
    check_month();
    while (day > day_cut)
    {
        check_month();
        day -= day_cut;
        if (day == 0)
        {
            day++;
        }
        month++;
        while (month > 12)
        {
            month -= 12;
            year++;
        }
        if (month == 0)
        {
            month++;
        }
    }

    // ������� ���
    printf("\n���������Ϊ: %d.%d.%d", year, month, day);
    wait();

}

int check_month(){
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
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"

int input_Check();
extern int select;

// 日期计算方法
int part_Date_Main()
{
    // 预定义 [年] [月] [日] 变量
    int year, month, day, year_add, month_add, day_add;
    printf("已进入日期计算主方法\n");
    printf("\n\n\n\n");
    printf("============== 日期计算 ==============\n");
    printf("等待输入 [年份]...");
    scanf("%d", &year);
    printf("等待输入 [月份]...");
    scanf("%d", &month);
    input_Check(0,month);
    printf("等待输入 [日期]...");
    scanf("%d", &day);
    printf("等待输入 [推迟日期]...");
    scanf("%d", &day_add);
    // 开始计算年份
    year += year_add;
    // 开始计算月份
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
    // 开始计算日
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

    // 计算完成 输出
    printf("%d.%d.%d", year, month, day);
    getchar();
}
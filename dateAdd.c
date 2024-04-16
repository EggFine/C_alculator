#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"
extern int select;
extern int wait();
extern int input_Check();

int check_month();

// 预定义 [年] [月] [日] 变量
int year, month, day, week_add, day_add,day_cut;

int dateAdd(){
    printf("等待输入 [开始年份(*y)]...");
    scanf("%d", &year);
    input_Check(1, year);
    printf("等待输入 [开始月份(*m)]...");
    scanf("%d", &month);
    input_Check(0, month);
    printf("等待输入 [开始日期(*d)]...");
    scanf("%d", &day);
    printf("等待输入 [推迟周期(*7d)]...");
    scanf("%d", &week_add);
    printf("等待输入 [推迟日期(*d)]...");
    scanf("%d", &day_add);

    // 开始计算日
    //先把日期堆起来，顺便把周数换算成日期也堆上去
    day += day_add + week_add * 7;
    //初始化月份检索，以进行第一次判断
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

    // 计算完成 输出
    printf("\n推算出日期为: %d.%d.%d", year, month, day);
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
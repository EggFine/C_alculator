#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

int select;
int main()
{
    printf("============== 欢迎使用计算器 [Welcome to the calculator] ==============\n");
    printf("! 输入数字进入你想要的功能 [Enter the number to enter the function you want] !\n");
    printf("[0x0] 日期计算\n");
    printf("[0x1] 等待开发...\n");
    printf("\n\n\n\n");
    printf("等待输入...");
    int select;
    scanf("%d", &select);
    select_go();
}

// 根据选项跳转至对应功能方法
int select_go()
{
    printf("已选择 [0x%d]\n", select);
    printf("正在切换入口...");
    if (select == 0)
    {
        printf("进入日期计算...");
        part_Data_Main();
    }
    else
    {
        printf("没有找到对应功能");
    }
}

// 日期计算方法
int part_Data_Main()
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

int input_Check(int checkType, int checkStr)
{
    // 定义判断是否非法输入的变量，并初始为假
    bool wrong = false;
    // checkType为0时是对日期是判断数值是否大于0
    switch (checkType)
    {
    case 0:
        if (checkStr <= 0)
        {
            wrong=true;
        }
        break;
    
    default:
        break;
    }
    if(wrong){
        system("cls");
        printf("输入不合法...");
        switch(checkType)
        {
        case 0:
            printf("输入内容不能小于或等于0\n");
        default:
            break;
        }
        printf("按 Enter 键继续。");
        char ch;
        do {
            ch = getch(); // 获取键盘输入的字符
        } while (ch != 13); // 13是回车键的ASCII码
        system("cls");
        select_go(select);
    }
}
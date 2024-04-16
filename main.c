#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"

int select_go();
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
        part_Date_Main();
    }
    else
    {
        printf("没有找到对应功能");
    }
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
        select_go();
    }
}
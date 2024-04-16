#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"

int select_go();
int wait();
int select;

int main()
{
    // 软件开场白，引导用户进行选择功能以进入指定方法
    printf("============== 欢迎使用系算 [ C_alculator ] ==============\n");
    printf("! 输入数字进入你想要的功能 [ Enter the number to enter the function you want ] !\n");
    printf("[0x0] 日期计算 [ Date Calculation ]\n");
    printf("[0x1] 等待开发... [ Coming Soon ! ]\n");
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
    switch (select)
    {
    case 0:
        printf("进入日期计算...");
        part_Date_Main();
        break;

    default:
        printf("没有找到对应功能");
        break;
    }
}


/*
    检查方法
    // Todo:
        分离到独立的C文件
*/
int input_Check(int checkType, int checkStr)
{
    // 定义判断是否非法输入的变量，并初始为假
    bool wrong = false;
    switch (checkType)
    {
    // checkType为0时是对日期是判断数值是否大于0
    case 0:
        if (checkStr <= 0)
        {
            wrong = true;
        }
        break;
    // checkType为1时对日期判断数值是否为非负数
    case 1:
        if (checkStr < 0)
        {
            wrong = true;
        }
    default:
        break;
    }
    // 如果输入不合法则判断原因且返回上一级
    if (wrong)
    {
        system("cls");
        printf("输入不合法...");
        switch (checkType)
        {
        case 0:
            printf("输入内容不能小于或等于0");
        case 1:
            printf("输入内容只能为非负数");
        default:
            break;
        }
        wait();
    }
}
int wait(){
    printf("\n\n\n按 Enter 键继续。");
    char ch;
    do
    {
        ch = getch();   // 获取键盘输入的字符
    } while (ch != 13); // 13是回车键的ASCII码
    system("cls");
    select_go();
}
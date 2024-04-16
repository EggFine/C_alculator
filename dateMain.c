#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"

extern int input_Check();
extern int select;
extern int wait();
extern int dateAdd();
// 日期计算方法
int part_Date_Main()
{
    printf("已进入日期计算主方法\n");
    printf("\n\n\n\n");
    printf("============== 日期计算 ==============\n");
    printf("! 输入数字进入你想要的功能 [ Enter the number to enter the function you want ] !\n");
    printf("[0x0] 日期推算 [ Date Calculation ]\n");
    printf("[0x1] 等待开发... [ Coming Soon ! ]\n");
    printf("\n\n\n\n");
    printf("等待输入...");

    printf("待更新，自动进入时间推算模块");
    printf("\n\n\n\n");
    dateAdd();
}


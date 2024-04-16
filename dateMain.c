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
    dateAdd();
}


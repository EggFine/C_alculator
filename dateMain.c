#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"

extern int input_Check();
extern int select;
extern int wait();
extern int dateAdd();
// ���ڼ��㷽��
int part_Date_Main()
{
    printf("�ѽ������ڼ���������\n");
    printf("\n\n\n\n");
    printf("============== ���ڼ��� ==============\n");
    printf("! �������ֽ�������Ҫ�Ĺ��� [ Enter the number to enter the function you want ] !\n");
    printf("[0x0] �������� [ Date Calculation ]\n");
    printf("[0x1] �ȴ�����... [ Coming Soon ! ]\n");
    printf("\n\n\n\n");
    printf("�ȴ�����...");

    printf("�����£��Զ�����ʱ������ģ��");
    printf("\n\n\n\n");
    dateAdd();
}


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
    // ��������ף������û�����ѡ�����Խ���ָ������
    printf("============== ��ӭʹ��ϵ�� [ C_alculator ] ==============\n");
    printf("! �������ֽ�������Ҫ�Ĺ��� [ Enter the number to enter the function you want ] !\n");
    printf("[0x0] ���ڼ��� [ Date Calculation ]\n");
    printf("[0x1] �ȴ�����... [ Coming Soon ! ]\n");
    printf("\n\n\n\n");
    printf("�ȴ�����...");
    int select;
    scanf("%d", &select);
    select_go();
}

// ����ѡ����ת����Ӧ���ܷ���
int select_go()
{
    printf("��ѡ�� [0x%d]\n", select);
    printf("�����л����...");
    switch (select)
    {
    case 0:
        printf("�������ڼ���...");
        part_Date_Main();
        break;

    default:
        printf("û���ҵ���Ӧ����");
        break;
    }
}


/*
    ��鷽��
    // Todo:
        ���뵽������C�ļ�
*/
int input_Check(int checkType, int checkStr)
{
    // �����ж��Ƿ�Ƿ�����ı���������ʼΪ��
    bool wrong = false;
    switch (checkType)
    {
    // checkTypeΪ0ʱ�Ƕ��������ж���ֵ�Ƿ����0
    case 0:
        if (checkStr <= 0)
        {
            wrong = true;
        }
        break;
    // checkTypeΪ1ʱ�������ж���ֵ�Ƿ�Ϊ�Ǹ���
    case 1:
        if (checkStr < 0)
        {
            wrong = true;
        }
    default:
        break;
    }
    // ������벻�Ϸ����ж�ԭ���ҷ�����һ��
    if (wrong)
    {
        system("cls");
        printf("���벻�Ϸ�...");
        switch (checkType)
        {
        case 0:
            printf("�������ݲ���С�ڻ����0");
        case 1:
            printf("��������ֻ��Ϊ�Ǹ���");
        default:
            break;
        }
        wait();
    }
}
int wait(){
    printf("\n\n\n�� Enter ��������");
    char ch;
    do
    {
        ch = getch();   // ��ȡ����������ַ�
    } while (ch != 13); // 13�ǻس�����ASCII��
    system("cls");
    select_go();
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

#include "dateMain.h"

int select_go();
int select;

int main()
{
    printf("============== ��ӭʹ�ü����� [Welcome to the calculator] ==============\n");
    printf("! �������ֽ�������Ҫ�Ĺ��� [Enter the number to enter the function you want] !\n");
    printf("[0x0] ���ڼ���\n");
    printf("[0x1] �ȴ�����...\n");
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
    if (select == 0)
    {
        printf("�������ڼ���...");
        part_Date_Main();
    }
    else
    {
        printf("û���ҵ���Ӧ����");
    }
}



int input_Check(int checkType, int checkStr)
{
    // �����ж��Ƿ�Ƿ�����ı���������ʼΪ��
    bool wrong = false;
    // checkTypeΪ0ʱ�Ƕ��������ж���ֵ�Ƿ����0
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
        printf("���벻�Ϸ�...");
        switch(checkType)
        {
        case 0:
            printf("�������ݲ���С�ڻ����0\n");
        default:
            break;
        }
        printf("�� Enter ��������");
        char ch;
        do {
            ch = getch(); // ��ȡ����������ַ�
        } while (ch != 13); // 13�ǻس�����ASCII��
        system("cls");
        select_go();
    }
}
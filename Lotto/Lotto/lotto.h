#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
int ary[7] = { 0, };


void user_lotto()
{
    int i;
    int j;
    
    for (i = 0; i < 7; i++)
    {
        ary[i] = rand() % 45 + 1;
        for (j = 0; j < i; j++)
        {

            if (ary[i] == ary[j])
                i--;
        }
    }

    for (int i = 0; i < 7; i++) {
        if (i == 6) {
            printf("보너스 번호 : [%d] ", ary[i]);
            break;
        }

        printf("[%d] ", ary[i]);
    }
}

//int lotto_value(int a, int b)
//{
//    int ary[][7] = { 0 };
//    int i;
//    int j;
//    int ary1[][7] = { 0 };
//
//    for (i = 0; i < 7; i++)
//    {
//        ary[][i] = rand() % 45 + 1;
//        for (j = 0; j < i; j++)
//        {
//            return ary[j][i]
//            if (ary[i] == ary[j])
//                i--;
//        }
//    }

void winner_print()
{
    int ary[6] = { 1, 2, 3, 4, 5, 6 };
    printf("1등은 %d 입니다.\n");
    printf("2등은 %d 입니다.\n");
    printf("3등은 %d 입니다.\n");
}


void buy_result(int a, int b)
{
    switch (a) {
    case 1:
        printf("신용카드 %d원 결제가 되었습니다.\n", b);
        break;
    case 2:
        printf("현금 %d원 결제가 되었습니다.\n", b);
        break;
    case 3:
        printf("휴대폰 %d원 결제가 되었습니다.\n", b);
        break;
    case 4:
        printf("문화상품권 %d원 결제가 되었습니다.\n", b);
        break;
    }
}

void chance(int a) {
    switch (a) {
    case 'y':
        break;
    case 'n':
        break;
    }
}

int money_check(int tn) {
    int i;
    int value = 0;
    for (i = 1; i < 101; i++)
    {
        if (tn >= i)
            value += 1000
            ;
        if (tn == i)
            return value;
    }
}

void view_init()
{
    for (int i = 0; i < 20; i++)
        printf("\n");
}

void lotto_print(int a){
    for (int i = 1; i < 101; i++)
    {
        if (a >= i) {
            printf("%d번째: ", i);
            user_lotto();
            printf("\n");
        }

    }
}

void vlaue_check()
{

}
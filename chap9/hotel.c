//
// Created by Administrator on 2022/7/19.
//

#include "stdio.h"
#include "hotel.h"

int menu(void) {
    setbuf(stdout, NULL);
    int code, status;
    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1)Fairfiled Arms      2)Hotel Olympic \n");
    printf("3)Chertworthy Plaza   4)The Stockton  \n");
    printf("5)quit \n");
    printf("\n%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)) {
        if (status != 1) {
            // 跳至下一个空白字符
            scanf("%*s");
        }
        printf("Enter an integer from 1 to 5,please.\n");
    }
    return code;
}

int getnights(void) {
    setbuf(stdout, NULL);
    int nights;
    printf("How many nights are needed?\n");
    while (scanf("%d", &nights) != 1) {
        scanf("%*s");// 处理非整数输入
        printf("Please enter an integer,such as 2.\n");
    }
    return nights;
}

void showprice(double rate, int nights) {
    setbuf(stdout, NULL);
    int n;
    double total = 0.0;
    double factor = 1.0;
    for (int n = 0; n < nights; ++n, factor *= DISCOUNT) {
        total += rate * factor;
    }
    printf("The total cost will be $%0.2f.\n", total);
}


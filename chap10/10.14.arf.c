//
// Created by tangyao on 2022/7/25
//
#include "stdio.h"

#define SIZE 5

// const修饰数组 表示不能用指针改变数据
void show_array(const double ar[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%8.3f", ar[i]);
    }
    putchar('\n');
}

void multi_array(double ar[], int n, double multi) {
    for (int i = 0; i < n; ++i) {
        ar[i] *= multi;
    }
}

#define MONTH 12

int main(void) {

    double dip[SIZE] = {20.0, 17.66, 3.3, 34.31, 677.1};
    printf("The original dip array:\n");
    show_array(dip, SIZE);
    multi_array(dip, SIZE, 2.5);
    printf("The dip array after calling multi_array():\n");
    show_array(dip, SIZE);

    const double PI = 3.14159;
//    PI += 1;
    const int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    days[9] = 44;

    double rates[5] = {45.45, 42.44, 262.7, 52.22, 278.5};
    const double *pd = rates;
//    *pd = 29.89;// 不允许
//    pd[2] = 34;//不允许
    rates[0] = 99.99;// 允许，因为rates未被限定
    pd++;// 让pd指向别处

    const double locked[4] = {0.03, 0.34, 0.3431, 0.881};
    const double *pc = rates;//有效
    pc = locked;// 有效
    pc = &rates[3];// 有效

    pc = locked;
    double *pnc = rates;
    // 只能把非const数据的地址赋给普通指针
//    pnc = locked;// 无效 这个规则很隔离，否则，通过指针就能改变const数组中的数据
    pnc = &rates[3];//有效

    // 所以show_array 函数可以接受普通数组名和const数组名作为参数，因为这两种参数都可以用来初始化指向const的指针
    show_array(rates, 5);
    show_array(locked, 4);

    multi_array(rates, 5, 1.4);
    // 使用非const标识符 修改const数据，结果是未定义的。
    multi_array(locked, 5, 1.4);

    // 声明并初始化一个不能指向别处的指针
    double *const pc1 = rates; // pc1 指向数组的开始
//    pc1 = &rates[2];// 不允许，因为该指针不能指向别处。
    *pc1 = 93.22;// 没问题--更改rates[0]的值

    // 该指针既不能更改它指向的地址，也不能修改指向改地址的值
    const double *const pc2 = rates;

//    pc2 = &rates[2];//不允许
//    *pc2 = 45.4;//不允许


    return 0;
}

//
// Created by tangyao on 2022/7/26
//
#include "stdio.h"

int sum(const int ar[], int n);

int main(void) {

    int diva[2] = {10, 20};
    (int[2]) {10, 20}; // 复合字面量
    int *pt1;
    pt1 = (int[]) {10, 20};


    //记住，复合字面量是提供只临时需要的值的一种手段。复合字面量具有块作用域（第12章将介绍相关内容），
    // 这意味着一旦离开定义复合字面量的块，程序将无法保证该字面量是否存在。
    // 也就是说，复合字面量的定义在最内层的花括号中。
    sum((int[]) {3, 4, 31, 6}, 4);

    return 0;
}

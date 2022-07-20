//
// Created by 唐尧 on 2022/7/20.
//
#include "stdio.h"

#define MONTHS 12

int main(void) {

    // const 设置数组只读
    const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//  不初始化就会使用内存响应位置上的现有值 ，部分初始化数组，剩余元素会被初始化为0
//    const int days[MONTHS];

    /* for (int index = 0; index < MONTHS; ++index) {
         printf("Month %2d has %2d days.\n", index + 1, days[index]);
     }*/

    for (int index = 0; index < sizeof days / sizeof days[0]; ++index) {
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
    }

    return 0;
}


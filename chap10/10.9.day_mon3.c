//
// Created by 唐尧 on 2022/7/20.
//
#include "stdio.h"

#define MONTHS 12

int main(void) {

    // const 设置数组只读
    const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int index = 0; index < MONTHS; ++index) {
        printf("Month %2d has %2d days.\n", index + 1, *(days + index));
    }

    return 0;
}


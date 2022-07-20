//
// Created by 唐尧 on 2022/7/21.
//


#include "stdio.h"

#define SIZE 4

int main(void) {

    short dates[SIZE];
    short *pti;
    double bills[SIZE];
    double *ptf;
    pti = dates;

    ptf = bills;
    printf("%23s %15s \n", "short", "double");

    for (int index = 0; index < SIZE; ++index) {
        printf("pointers + %d: %p %p\n ", index, pti + index, ptf + index);

    }

    return 0;
}
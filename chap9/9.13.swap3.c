//
// Created by Administrator on 2022/7/20.
//

#include "stdio.h"

void interchange(int *x, int *y);

int main(void) {
    int x = 5, y = 10;
    printf("Originally x =%d and y =%d.\n", x, y);
    interchange(&x, &y);
    printf("Now x =%d and y =%d.\n", x, y);
}

void interchange(int *u, int *v) {
    int temp;
    printf("Originally u =%d and v =%d.\n", *u, *v);
    temp = *u;
    *u = *v;
    *v = temp;
    printf("Now u =%d and v =%d.\n", *u, *v);
}

//
// Created by tangyao on 2022/7/26
//
#include "stdio.h"

#define ROWS 3
#define COLS 4

//表示 ar 指向一个含有4个int类型的数组，所以ar+1 意思是 改地址加上16字节。如果第二个方括号是空的，编译器就不知道该怎么处理。
void sum_rows(int ar[][COLS], int rows) {
    for (int r = 0; r < rows; ++r) {
        int total = 0;
        for (int c = 0; c < COLS; ++c) {
            total += ar[r][c];
        }
        printf("row %d: sum = %d\n", r, total);
    }
}

void sum_cols(int ar[][COLS], int rows) {
    for (int c = 0; c < COLS; ++c) {
        int total = 0;
        for (int r = 0; r < rows; ++r) {
            total += ar[r][c];
        }
        printf("col %d: sum = %d\n", c, total);
    }
}

int sum2d(int (*ar)[COLS], int rows) {
    int total = 0;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < COLS; ++c) {
            total += ar[r][c];
        }
    }

    return total;
}

typedef int arr4[4];
typedef arr4 arr3x4[3];

int sum2(arr3x4 ar, int rows);

int sum2(int ar[3][4], int rows);

int sum2(int ar[][4], int rows);

// 一般而言，声明一个指向N维数组的指针，只能胜率最左边方括号的值：
int sum4d(int ar[][4][3][4], int rows);

int sum4d(int (*ar)[4][3][4], int rows);

int main(void) {

    int junk[ROWS][COLS] = {{2,  4,  6, 8},
                            {3,  5,  7, 9},
                            {12, 10, 8, 6}};
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all element = %d \n", sum2d(junk, ROWS));
    sum2(junk, 3);

    return 0;
}

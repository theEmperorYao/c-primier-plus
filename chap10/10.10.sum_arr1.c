//
// Created by Administrator on 2022/7/25.
//
#include "stdio.h"

#define SIZE 10

int sum(int ar[], int n);

int main(void) {
    int marbles[SIZE] = {20, 43, 31, 3, 431, 3, 1, 3, 5, 6};
    long answer;
    answer = sum(marbles, SIZE);
    // %ld long %zd 无符号整数
    printf("The total number of marbles is %ld.\n", answer);
    // 含10个int类型的值，每个占4字节，所以大小为40字节
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    return 0;
}

int sum(int ar[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += ar[i];
    }
    // ar 8字节，因为ar并不是数组本身，他是一个指向marbles数组元素的指针，系统中用8字节存储地址，
    printf("The size of ar is %zd bytes.\n", sizeof ar);
    return sum;
}



//
// Created by Administrator on 2022/7/25.
//
#include "stdio.h"

#define SIZE 10

int sump(int *start, int *end);

int main(void) {

    int marbles[SIZE] = {20, 43, 31, 3, 431, 3, 1, 3, 5, 6};
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return 0;
}

int sump(int *start, int *end) {
    int total = 0;

    // c保证在给数组分配空间时，指向数组后面的第一个位置的指针仍然是有效的指针
    while (start < end) {
        // * 和 ++ 优先级相同，结合律从右往左，所以start++先求值，
        total += *start;
        start++;
    }
    return total;
}
//
// Created by 唐尧 on 2022/6/23.
//

#include "stdio.h"

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];
    printf("What's your name? ");
    // scanf 只会读到到第一个空格之前
    scanf("%s", name);
    printf("Hello ,%s .%s\n", name, PRAISE);
}


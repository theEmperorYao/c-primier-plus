//
// Created by 唐尧 on 2022/6/23.
//

#include "stdio.h"
#include "string.h"

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello %s .%s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);

    return 0;

}


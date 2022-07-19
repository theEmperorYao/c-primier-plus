//
// Created by 唐尧 on 2022/7/19.
//

#include "stdio.h"
#include "string.h"

#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void) {
    int spaces;
    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, (WIDTH - strlen(NAME)) / 2);
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;

    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
}

void show_n_char(char ch, int num) {
    for (int count = 0; count < num; ++count) {
        putchar(ch);
    }
}

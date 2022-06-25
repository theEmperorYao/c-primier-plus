//
// Created by 唐尧 on 2022/6/23.
//

#include "stdio.h"
#include "string.h"

#define DENSITY 62.4

int main() {

    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi !What your first name?\n");
    scanf("%s", name);
    printf("%s,what's your weight in pounds? \n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well , %s ,your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also,your first name has %d letters ,\n", letters);
    printf("and We have %d bytes to store it.\n", size);
    return 0;

}


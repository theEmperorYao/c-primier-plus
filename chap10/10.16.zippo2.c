//
// Created by tangyao on 2022/7/26
//
#include "stdio.h"

int main(void) {

    int zippo[4][2] = {{2, 4},
                       {6, 8},
                       {1, 3},
                       {5, 7}};
    // 指向数组，内含两个int类型的指针
    int(*pz)[2];
    pz = zippo;

    printf(" pz   =  %p , pz + 1  = %p\n", pz, pz + 1);
    printf("pz[0] =  %p ,pz[0] +1 = %p\n", pz[0], pz[0] + 1);
    printf(" *pz  =  %p ,*pz  +1  = %p\n", *pz, *pz + 1);
    printf("pz[0][0] = %d\n", pz[0][0]);
    printf("*pz[0] =  %d\n", *pz[0]);
    printf("**pz = %d\n", **pz);
    printf("pz[2][1] =%d\n", pz[2][1]);
    printf("*(*(pz+2)+1) = %d", *(*(pz + 2) + 1));

    int n = 5;
    double x;
    int *pl = &n;
    double *pd = &x;
    x = n;
//    pd = pl;// Incompatible pointer types assigning to 'double *' from 'int *
    putchar('\n');
    printf("pd = %p \n", pd);
    printf("pl = %p \n", pl);

    printf("===============\n");

    int *pt;
    int (*pa)[3];
    int ar1[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    int ar2[3][2];
    int **p2;
    pt = &ar1[0][0];// 都是指向int的指针
    printf("pt = %p ,*pt = %d\n", pt, *pt);
    printf("pt +1 = %p ,*(pt+1) = %d\n", pt + 1, *(pt + 1));
    pt = ar1[0];// 都是指向int的指针
    printf("pt = %p ,*pt = %d\n", pt, *pt);
    printf("pt +1 = %p ,*(pt+1) = %d\n", pt + 1, *(pt + 1));
    pt = ar1; // 无效
    pa = ar1;//都是指向内含3个int 类型元素数组指针
    pa = ar2;//无效
    p2 = &pt;//都是指向int * 的指针
    *p2 = ar2[0];// 都是指向int的指针
    p2 = ar2;//无效

    printf("================\n");

    x = 20;
    const int y = 23;
    int *p11 = &x;
    const int *p22 = &y;
    const int **pp2;
    p11 = p22;//不安全，把const指针赋值给非const指针 因为可以使用新的指针改变const指针指向的数据
    p22 = p11;// 有效 把非const指针赋值给const指针 只进行一级解引用是安全的
    pp2 = &p11;// 不安全  嵌套指针类型赋值
    //  pp2 = &p11 不安全例子
    printf("================\n");
    int *p1 = &x;
    const int n1 = 13;
    pp2 = &p1; // 允许，但是这导致const限定符失效，根据 const int **pp2; ，不能通过**p2 修改它所指向的内容 Assigning to 'const int **' from 'int **' discards qualifiers in nested pointer types
    printf("pp2 = %p\n", pp2);
    *pp2 = &n1;// 有效，两者都声明为const，但是这将导致p1指向n（*pp2已被修改）
    printf("pp2 = %p\n", pp2);
    *p1 = 10;// 有效 ，但是这将改变n1的值，但是根据   const int n1 = 13; 不能修改n的值

    printf("=============\n");
    const int y1;
    const int *py2 = &y1;
    int *py1;
    py1 = py2;// C++中不允许把const指针赋值给非const指针，但是c可能只给警告，如果通过p1更改y，行为未定义。

    return 0;
}

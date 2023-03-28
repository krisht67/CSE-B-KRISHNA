#include<stdio.h>
void main()
{
    int x=5;
    int y=6;
    int *p1 = &x, *p2 = &y;
    printf("Sum using pointers : %p", (p1)-(p2));
}
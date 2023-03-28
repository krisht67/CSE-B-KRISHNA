#include<stdio.h>
void main()
{
    int x=5;
    int y=6;
    int *p1 = &x, *p2 = &y;
    printf("Before Swapping");
    printf("\nValue of p1 : %d", *p1);
    printf("\nValue of p2 : %d",*p2);

    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;

    printf("\nAfter Swapping");
    printf("\nValue of p1 : %d", *p1);
    printf("\nValue of p2 : %d",*p2);
}
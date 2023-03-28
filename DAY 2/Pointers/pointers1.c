#include<stdio.h>
void main()
{
    int a = 10;
    int *ptr = &a;
    printf("\nAddress of a : %p", &a);
    printf("\nAddress of a using ptr : %p", ptr);
    printf("\nValue of a : %d", a);
    printf("\nValue of a using ptr : %d", *ptr);
}
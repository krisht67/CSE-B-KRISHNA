#include<stdio.h>
void main()
{
    int m,n, arr[10][10];
    printf("Enter sizes :\n");
    scanf("%d %d", &m,&n);
    printf("Enter array elements :\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    printf("Array is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}
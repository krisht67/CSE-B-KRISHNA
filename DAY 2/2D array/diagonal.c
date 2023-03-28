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
    printf("Upper Diagonal Elements are :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<j)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("Lower Diagonal Elements are :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>j)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("Diagonal Elements are :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
}
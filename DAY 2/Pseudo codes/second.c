#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20], sum=0, len, check=0;
    printf("Enter len : ");
    scanf("%d", &len);
    printf("Enter Array :\n");
    for(int i=0; i<len; i++)
    {
        scanf("%d", &arr[i]);
        sum+= arr[i];
    }
    for(int i=2; i<sum/2; i++)
    {
        if(sum%2 == 0)
        {
            check = 1;
            break;
        }
    }
    if(check==0)
        printf("Prime");
    else
        printf("Not prime");

}
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[20];
	int len=0,i=0;
	printf("Enter string : ");
	scanf("%s", str);
	len = strlen(str) - 1;
	while(len>=0)
	{
		if(str[len] == '*')
			i++;
		else
			i--;
		len--;
	}
	printf("Differnce n(*) & n(#) : %d", i);
	return 0;
}
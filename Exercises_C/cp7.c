#include<stdio.h>
int main()
{
    int i,num, fact=1;
    printf("enter the number");
    scanf("%d",&num);
    i=1;
    while (i<=num)
    {
        fact=fact *i;
        i++;
    }
    printf("%d",fact);
}

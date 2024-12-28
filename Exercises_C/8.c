#include<stdio.h>
int main()
{
    int rem,n,i;
    printf("Enter the number that you want to reverse: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }

}

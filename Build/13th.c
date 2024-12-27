#include<stdio.h>
int main()
{
    int i,n,product=1;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("%d!=",n);
    for(i=n; i>=1; i--)
    {
        printf("%d",i);
        if(i!=1)
        {
            printf("X");
        }
        product=product*i;
    }
    printf("=");
    printf("%d",product);
}


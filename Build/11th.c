#include<stdio.h>
int main()
{
    int i,j,sum=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(i*i*(i+1));
    }
    printf("Result: %d",sum);
}


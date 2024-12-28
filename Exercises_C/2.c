#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value for N: ");
    scanf("%d",&n);
    for(i=1;i<=2*n;i=i+2)
    {
        printf("%d",i);
        if(i<2*n-1)
        {
            printf(", ");
        }
    }
}


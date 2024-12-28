#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value for N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i<n)
        {
            printf(", ");
        }
    }
}

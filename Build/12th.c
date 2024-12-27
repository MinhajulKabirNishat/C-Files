
#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,n3,i;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("%d",n2);
    if(n!=1)
    {
        printf(", ");
    }
    for(i=2;i<=n;i++)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
        if(i<n)
        {
            printf(", ");
        }
    }
}

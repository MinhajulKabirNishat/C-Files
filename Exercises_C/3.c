#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value for N: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("1");
            if(i<n)
            {
                printf(", ");
            }
        }
        else
        {
            printf("0");
            if(i<n)
            {
                printf(", ");
            }
        }
    }
}

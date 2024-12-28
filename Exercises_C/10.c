#include<stdio.h>
int main()
{
    int i,j,sum,sum1=0,sum2=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {

            //printf("%d, ",-i);
            sum1=sum1+(-i);

        }
        else
        {
            //printf("%d, ",i);
            sum2=sum2+i;
        }
    }
    sum=sum1+sum2;
    printf("Result: %d",sum);





}

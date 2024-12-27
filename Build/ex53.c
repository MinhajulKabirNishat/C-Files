
#include<stdio.h>
int main()
{
    int n,lastdigit,firstdigit,sum=0;
    printf("enter any number ");
    scanf("%d",&n);
    lastdigit=n%10;


    firstdigit=n;
    while(n>=10){
        n=n/10;
    }
    firstdigit=n;


    sum=firstdigit+lastdigit;
    printf("sum of first and last=%d",sum);
    return 0;
}

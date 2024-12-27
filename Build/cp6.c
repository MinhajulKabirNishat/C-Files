#include<stdio.h>
int main()
{
    int n,i;
    long long fact=1;
    printf("enter the numbers");
    scanf("%d",&n);

    i=1;
    while(i<=n){
        fact=fact*i;
        i++;

    }
    printf("%d=%lld",n,fact);
}
for(i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("%d=%lld",n,fact);

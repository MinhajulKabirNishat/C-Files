// armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);



    int digitCount = 0;
int n =num;
    while(n!=0){
        int digit=n%10;
        digitCount++;
        n=n/10;
    }
}

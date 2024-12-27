#include <stdio.h>

int main()
{
    long num;
    int count=0;
    printf("enter the number");
    scanf("%ld",&num);

   do
    {
        count++;
        num=num/10;


    }while(num!=0);
    printf("number of digits is integer%d",count);


}




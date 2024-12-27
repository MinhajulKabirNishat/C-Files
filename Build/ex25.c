#include<stdio.h>
int main()
{
    int num;
    printf("enter any number");
         scanf("%d",&num);
    if (num%5==0){
        printf("the number is divisibleby 5 and 11 ");

    }
    else if(num%11==0){
        printf("the number is divisible by 5 and 11");
    }
    else
    {
        printf("the number is not divisible by 5 and 11");

    }

}
//((num%5==0)&&(num%11==0))


#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("num1 is larger ");
    }
    if(num2>num1){
        printf("num2 is larger");

    }
    if(num1==num2){
        printf("both are equal number");

    }
}

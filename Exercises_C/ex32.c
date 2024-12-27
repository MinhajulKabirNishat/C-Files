
#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    large=num1>num2 ?num1:num2;
    printf("large number is=%d",large);
}

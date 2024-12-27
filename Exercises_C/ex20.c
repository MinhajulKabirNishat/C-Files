#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci;
    printf("enter the values");
    scanf("%f%f%f",&p,&t,&r);
    ci=p*(pow((1+r/100),t));
    printf("the compound interest is %f",ci);
}

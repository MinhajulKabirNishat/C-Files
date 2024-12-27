#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("enter the values");
    scanf("%f%f%f",&p,&t,&r);
    si=p*t*r/100;
    printf("the simple interest is %f",si);
}

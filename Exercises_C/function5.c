//x to the power of y using/not using library function
#include<stdio.h>
int main()
{
    double base,exp,result;

    printf("enter the base and exponent");
    scanf("%lf%lf",&base,&exp);
    result=pow(base,exp);
    printf("%.2lf",result);
    for(int i=1;i<=exp;i++){
        result=result*base;

    }
    printf("%d\n",result);
}

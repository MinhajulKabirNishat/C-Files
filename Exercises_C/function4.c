//user defined function
#include<stdio.h>
void calculatePower(double base,double exp)
{
   double result=1,i;

    for(i=1;i<=exp;i++){
        result=result*base;
    }
    printf("%.lf\n",result);
}

int main()
{


double base, exp;
printf("enter the base and exponent");
scanf("%lf%lf",&base,&exp);
calculatePower(base,exp);


}

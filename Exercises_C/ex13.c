#include<stdio.h>
#include<math.h>
int main()
{

    double power,base,expotent;
    printf("enter base and expotent");
    scanf("%lf %lf",&base,&expotent);
    power= pow(base,expotent);
    printf("%lf^%lf=%lf",base,expotent,power);
}

//centimeter meter kilometer
#include<stdio.h>
int main()
{
    float centimeter, meter, kilometer;
    printf("enter the number of centimeter");
    scanf("%f",&centimeter);
    meter=centimeter/100.0;
    kilometer=centimeter/100000.0;
    printf("METER=%f \n",meter);
    printf("KILOMETER=%f",kilometer);
    return 0;
}

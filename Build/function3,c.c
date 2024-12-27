//area of a triangle
#include<stdio.h>
double triangleArea(double b,double h);

int main()
{
    double base, height;
    printf("enter the base and height:  ");
    scanf("%lf%lf",&base,&height);
    double area=triangleArea(base,height);
    printf("Area =%.lf \n",area);

}
double triangleArea(double b,double h)
{

return 0.5*b*h;
}

#include<stdio.h>
//math.h use korle 3.14 likhte hoy na M_PI likhlei hoy
int main()
{

    float radius, diameter, circumference, area;
    printf("enter radius of a circle");
    scanf("%f",&radius);
    diameter= 2* radius;
    circumference= 2*3.14*radius;
    area= 3.14*(radius*radius);
    printf("diameter of a circle=%f",diameter);
    printf("circumference of circle=%f",circumference);
    printf("area of a circle=%f",area);
}

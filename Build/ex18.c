
#include<stdio.h>
int main()
{
    float physics,chem,math,bio,eng;
    float total,avg,percentage;
    printf("enter the subjects");
    scanf("%f%f%f%f%f",&physics,&chem,&math,&bio,&eng);
    total=physics+chem+math+bio+eng;
    avg=total/5.0;
    percentage=(total/500)*100;
    printf("total marks=%f\n",total);
    printf("avg marks=%f\n",avg);
    printf("percentage marks=%f",percentage);
}

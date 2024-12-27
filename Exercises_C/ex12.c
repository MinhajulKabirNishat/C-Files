#include<stdio.h>
int main()
{
    float days,years,weaks;

    printf("enter the days");
    scanf("%d",&days);
    years=days/365;
    weaks=(days-(years*365))/7;
    days=days-((years*365)+(weaks*7));
    printf("YEARS=%d\n",years);
    printf("WEAKS=%d\n",weaks);
    printf("DAYS=%d",days);
}

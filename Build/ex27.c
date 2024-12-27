#include<stdio.h>
int main()
{
    int year;
    printf("enter any year");
         scanf("%d",&year);
    if (year%400==0){
        printf("not leap yesr ");

    }
    else if(year%4==0){
        printf("leap year");
    }
    else if(year%100!=0)
    {
        printf("not leap year");

    }

}
//((num%5==0)&&(num%11==0))

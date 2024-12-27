#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("enter all the numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if (num1>num3){
            printf("num1 is maximum");
        }
        else {
            printf("um3 is maximum");
        }


    }
    else
    {
        if(num2>num3){
            printf("num2 is maximum");
        }
            else{
               printf( "num3 is maximum");
            }
    }


printf("maximum all three numbers=%d",max);


}

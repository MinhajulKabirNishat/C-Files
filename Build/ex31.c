
#include<stdio.h>
int main()
{
    int weak;
    printf("enter weak");
    scanf("%d",&weak);
    if (weak==1){
        printf("the day is monday");

    }
    else if(weak==2){
        printf("the day is tuesday");

    }
    else if (weak==3){
        printf("the day is wednessday");
    }
     else if (weak==4){
        printf("the day is thursday");
     }
       else if (weak==5){
        printf("the day is friday");
       }
       else if (weak==6){
        printf("the day is saturday");
      }
       else if(weak==7){
        printf("the day is sunday");
      }
     else{
       printf ("invalid input");
    }


}

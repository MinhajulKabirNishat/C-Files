#include<stdio.h>
int main()
{
    int i,sum=0;
    int array[10];
    printf("enter ten number:");
    for(i=0;i<10;i++){
        scanf("%d ",&array[i]);
    }


    for(i=0;i<10;i++){
        sum=sum+array[i];
    }
    printf("%d\n",sum);
    printf("%.2f\n",(float)sum/10);

}

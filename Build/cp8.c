
#include<stdio.h>
int main()
{
    int i,num;
    printf("enter the number");
    scanf("%d",&num);
    i=1;
    while (i<=num)
    {

        if (num%i==0){
            printf("%d,",i);
        }
        i++;

    }

}

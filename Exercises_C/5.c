#include<stdio.h>
int main()
{
    int i,X,Y;
    printf("Enter the value for X and Y: \n");
    scanf("%d %d",&X,&Y);
    if(X<Y)
    {
        for(i=X; i<Y; i++)
        {
            printf("%d, ",i*i);
        }
        printf("Reached!");
    }
    else if(X>Y)
    {
        for(i=X; i>Y; i--)
        {
            printf("%d, ",i*i);
        }
        printf("Reached!");
    }
    else
    {
        printf("Reached!");
    }

}

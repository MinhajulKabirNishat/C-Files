#include<stdio.h>

int sum(int a,int b,int c)
{
  return a+b+c;
}

int sub(int a,int b,int c)
{
    return a-b-c;
}
int mul (int a,int b,int c)
{
    return a*b*c;
}


int main()
{

    printf("the SUM is: %d\n",sum(5,6,11));

    printf("the SUM is: %d\n",sum(10,10,10 ));

     printf("the sum is: %d\n",sub(10,5,2));

     printf("the sum is: %d\n",mul(3,2,1));


}





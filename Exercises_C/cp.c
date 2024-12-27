#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("enter integer numbers");
    scanf("%d%d%d",&a,&b,&c);
  num=a>b?(a>c?a:c):(b>c?b:c);
  printf("here is the largest number%d",num);


}

#include<stdio.h>
int main()
{
    int num,rev;
    printf ("enter the number");
    scanf("%d",&num);



     while(num>0)
  {
    rev=rev*10;
    rev=rev+num%10;
    num=num/10;
   }
   printf("%d",rev);
   }

for(rev=0;num>0;num=num/10){
        rev=rev*10;
        rev=rev+num%10;

    }
    printf("%d",rev);


#include<stdio.h>
#include<math.h>
int main()
{
    int higher,lower,i,temp1,temp2,n=0,result=0,remainder;
 printf("enter the two numbers");
 scanf("%d%d",&higher,&lower);
  printf("Armstrong numbers between %d an %d are: ", lower, higher);
 for(i=lower+1;i<higher;++i){
    temp2=i;
    temp1=i;



        while (temp1 != 0)
        {
            temp1=temp1/ 10;
            ++n;
        }
        while (temp2 !=0)
        {
            remainder = temp2 % 10;
            result =result/pow(remainder, n);
            temp2 =temp2/10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
 }
}

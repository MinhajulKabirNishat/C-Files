// c program to perform all arithmetic operations
 #include<stdio.h>
 int main()
 {
     int num1,num2;
     int sum,sub,mult,mod;
     float div;
     printf("enter the two numbers");
     scanf("%d%d",&num1,&num2);
     sum=num1+num2;
     sub=num1-num2;
     mult=num1*num2;
     mod=num1%num2;
     div=(float)num1/num2;

    printf("sum=%d\n",sum);
    printf("difference=%d\n",sub);
    printf("product=%d\n",mult);
    printf("modulus=%d\n",mod);
    printf("quotient=%f",div);

 }

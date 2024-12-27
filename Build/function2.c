//square of a number
#include<stdio.h>
int square(int a)
{
    return a*a;
}


int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int sum=square(num);
    printf("the sum is %d",sum);

}

#include <stdio.h>
#include<math.h>
/*
Armstrong Number
*/
int main()
{
    int num;
    scanf("%d", &num);

    // Digit Count
    int digitCount = 0;
    int n =num;
    while(n!=0){
        int digit=n%10;
        digitCount++;
        n=n/10;
    }

    // Digit Extraction and Summation
    int sum =0;
    n =num;
    while(n!=0){
        int digit=n%10;
        sum = sum + pow(digit,digitCount);
        n=n/10;
    }

    if(sum==num){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }


}
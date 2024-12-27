
#include<stdio.h>
int main(){
    int a,b,c,max;

    printf("enter all the three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is greater");
    }
    else if(b>a&&b>c){
        printf("b is greater");

    }
    else if (c>a&&c>b){
        printf("c is greater");
    }

    printf("maximum all three numbers=%d",max);
}

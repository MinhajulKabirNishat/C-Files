#include<stdio.h>
int main(){
    char ch;
    printf("enter the chracter ");
    scanf("%c",&ch);

    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        printf("the character is an alphabet");

    }
    else
    {
        printf("the character is not alphabet");
    }

}

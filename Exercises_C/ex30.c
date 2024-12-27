#include<stdio.h>
int main()
{
    int ch;
    printf("enter the character ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("the words are upperdcase");

    }
     if(ch>='a'&&ch<='z'){
        printf("the words are lowercase");

    }
    else{
        printf("character is not alphabet");
    }

}

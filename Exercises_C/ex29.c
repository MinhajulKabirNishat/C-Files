#include<stdio.h>
int main(){
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    printf ("the character is vowel");
    }


    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        printf("the character is an alphabet");

    }
    else
    {
        printf("the character is not alphabet");
    }

}

#include<stdio.h>
int main()
{
    char up,low;
    scanf("%c",&up);
    if (up>='A'&&up<='Z')
    {
        up=tolower(up);
        printf("%c",low);

    }
    else{
        printf("wrong input");
    }
}

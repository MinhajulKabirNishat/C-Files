#include<stdio.h>
int main()
{
    int i,j;
    char a;
    printf("Enter any number or character: ");
    i=1;
    for(j=1;;j++)
    {
        scanf("%c",&a);
        getchar();
        if(a>='0'&&a<='9')
        {
            printf("\ninput %d: %c\n",i,a);
        }
        else if(a>='a'&&a<='z')
        {
            printf("\ninput %d: %c\n",i,a);
        }
        else if(a>='B'&&a<='Z')
        {
            printf("\ninput %d: %c\n",i,a);
        }
        else if(a=='A')
        {
            break;
        }
        i++;
    }
}

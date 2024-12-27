
#include<stdio.h>
int main()
{
    int i,power,base,expotent;
    printf("enter all the integers");
    scanf("%d%d",&base,&expotent);
    power=1;
    i=1;
    while(i<=expotent){
        power=power*base;
        i++;
    }
    printf("%d",power);
}
for(i=1;i<=expotent;i++){
        power=power*base;

    }
    printf("%d",power);
}

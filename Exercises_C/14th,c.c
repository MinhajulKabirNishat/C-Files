#include<stdio.h>
int main()
{
    int n,r,C,fn=1,fr=1,fnr=1;
    printf("Enter the value of n and c: \n");
    scanf("%d %d",&n,&r);
    for(int i=n; i>=1; i--)
    {
        fn=fn*i;
    }
    for(int l=r; l>=1;l--)
    {
        fr=fr*l;
    }
    //printf("%d %d",fn,fr);
    for(int k=(n-r); k>=1; k--)
    {
        fnr=fnr*k;
    }
    //printf("\n%d",fnr);
    for(int j=1;j<=1;j++)
    {
        if(n<r)
    {
        printf("n must be greater than r");
        break;
    }
    else
    {
        C=fn/(fnr*fr);
        printf("%d",C);
    }
    }

}


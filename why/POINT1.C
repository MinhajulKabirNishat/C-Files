#include<stdio.h>
  int main()
{
    int n1,n2,maxi;
    scanf("%d %d", &n1,&n2);
    int *p1=&n1;
    int *p2=&n2;
    if (*p1>*p2)
        maxi=*p1;
    else{
        maxi=*p2;
    }
    printf( "%d",maxi);
}

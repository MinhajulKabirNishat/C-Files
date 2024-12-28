#include<stdio.h>
int main()
{
    int i,n;
    float avg,sum=0;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    float arr[n];
    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%f",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("AVG of %d inputs: %0.6f",n,avg);


}

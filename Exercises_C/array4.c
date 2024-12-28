//find the second largest element of a array
#include<stdio.h>f
int main()
{
    int i,n,array[10];
    printf("enter the number");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    int max1,max2;
    for (i=0; i<n; i++){
        if (array[i] > max1 ){

        max2=max1;
        max1 = array[i];
        }
         else if (array[i]> max2 && array[i]< max1){
         max2 = array[i];
         }


    }
    printf("maximum1 =%d\n",max1);
    printf("maximum2 =%d",max2);

}

#include <stdio.h>
int main() {
   int n,row,column;
   printf("enter the values");
   scanf("%d",&n);
   for(row=n;row>=1;row--){
    for(column=1;column<=row;column++){
        printf("* ");

    }
    printf("\n");
   }
}

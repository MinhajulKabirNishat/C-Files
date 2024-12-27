
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    for(int row=n;row>=1;row--){
        char ch="N";
         for(int col=1;col<=row;col++){
        printf("%c ",ch);
             ch++;
      }
      printf ("\n");

    }
}

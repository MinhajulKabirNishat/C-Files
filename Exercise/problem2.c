
#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer N: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd integer.");
        return 1;
    }

    printf("\n");
    int count = n-1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 ) {
                printf("%d", i);
            }
            else if (j == n ) {
                printf("%d", count--);
            }
           else if (i==1||i==n ) {
                printf("+");
            }
           else if (i == n / 2 + 1) {
                if (j == n / 2 + 1) {
                    printf("*");
                }
                else if (i==1||i==n ) {
                    printf("+");
                }
                else {
                    printf(" ");
                }
            }

           else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

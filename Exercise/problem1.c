
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0)
                printf("*");
            else
                printf("+");
        }
        printf("\n");
    }

    return 0;
}

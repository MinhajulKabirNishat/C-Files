#include <stdio.h>

// Function to check if a number is prime
int is_prime(int x) {
    if (x <= 1) {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

// Function to check if a number is a power of 2 (using recursion)
int power_of_2(int x) {
    if (x == 1) {
        return 1; // x is a power of 2
    } else if (x % 2 == 0 && x > 1) {
        return power_of_2(x / 2);
    } else {
        return 0; // x is not a power of 2
    }
}

// Function to check if a number is a Mersenne prime
int is_mersenne(int x) {
    return is_prime(x) && power_of_2(x + 1);
}

int main() {
    // Sample Input
    int inputNumber;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    // Checking if the number is a Mersenne prime
    if (is_mersenne(inputNumber)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}


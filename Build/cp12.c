
#include <stdio.h>
#include <math.h>
int main()
{
    int lower, higher, i, temp1, temp2, remainder, n = 0, result = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &lower, &higher);
    printf("Armstrong numbers between %d an %d are: ", lower, higher);
    for(i = lower + 1; i < higher; ++i)
    {
        temp2 = i;
        temp1 = i;
        // number of digits calculation
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        // result contains sum of nth power of its digits
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        // checking if number i is equal to the sum of nth power of its digits
        if (result == i) {
            printf("%d ", i);
        }
        // resetting the values to check Armstrong number for next iteration
        n = 0;
        result = 0;
    }
    return 0;
}

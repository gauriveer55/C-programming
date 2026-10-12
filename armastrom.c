#include <stdio.h>

int main()
//An Armstrong number is a number in which the sum of the cubes of its digits is equal to the original number.
{
    int num = 153;
    int original, remainder, sum = 0;

    original = num;

    while (num > 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number.", original);
    }
    else
    {
        printf("%d is not an Armstrong number.", original);
    }

    return 0;
}
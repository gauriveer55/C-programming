#include <stdio.h>

struct Vector
{
    int x;
    int y;
};

int main()
{
    struct Vector v1 = {10, 20};
    struct Vector v2 = {5, 15};
    struct Vector sum;

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of two vectors = (%d, %d)", sum.x, sum.y);

    return 0;
}
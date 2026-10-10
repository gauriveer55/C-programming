#include <stdio.h>
#include <stdlib.h>
//The heap is used for dynamic memory allocation, when a program requests memory during execution.
int main()
{
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        return 1;
    }

    *ptr = 50;

    printf("%d\n", *ptr);

    free(ptr);

    return 0;
}
#include <stdio.h>
//The stack is commonly used to store local variables, function parameters, and function-call information.
void display()
{
    int x = 10;
    printf("%d\n", x);
}

int main()
{
    display();
    return 0;
}
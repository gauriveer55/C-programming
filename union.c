#include <stdio.h>
//a union is a user-defined data type that allows different members (variables) to share the same memory location.
//struct → each member has its own storage.
//union → all members share the same storage.

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;

    d.i = 10;
    printf("Integer = %d\n", d.i);

    d.f = 5.5;
    printf("Float = %.1f\n", d.f);

    d.ch = 'A';
    printf("Character = %c\n", d.ch);

    return 0;
}
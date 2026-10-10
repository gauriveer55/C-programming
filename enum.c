#include <stdio.h>
//enum (enumeration) is a user-defined type that gives names to a set of integer constants.
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main()
{
    enum Day today;

    today = WEDNESDAY;

    printf("Day number = %d\n", today);

    return 0;
}
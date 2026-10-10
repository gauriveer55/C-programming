#include <stdio.h>
//typedef is used to give an existing data type a new name (alias).
typedef struct
{
    int id;
    float salary;
} Employee;

int main()
{
    Employee e1 = {101, 25000.0};

    printf("ID = %d\n", e1.id);
    printf("Salary = %.2f\n", e1.salary);

    return 0;
}
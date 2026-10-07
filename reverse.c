#include <stdio.h>

int main()
{
    // Declare and initialize the array
    int arr[5] = {10, 20, 30, 40, 50};

    int i, temp;

    // Reverse the array using swapping
    for(i = 0; i < 5 / 2; i++)
    {
        // Store the current element temporarily
        temp = arr[i];

        // Replace current element with the corresponding last element
        arr[i] = arr[4 - i];

        // Put the stored element at the last position
        arr[4 - i] = temp;
    }

    // Print the reversed array
    printf("Reversed array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
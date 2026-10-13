#include <stdio.h>
//Bit manipulation means setting, clearing, checking, or toggling individual bits of a number using bitwise operators. It is one of the most important topics for embedded systems because microcontrollers use bits to control registers, LEDs, sensors, and communication peripherals.
int main()
{
    unsigned int reg = 10;  // Binary: 00001010

    // Set bit 2
    reg |= (1U << 2);
    printf("After setting: %u\n", reg);

    // Clear bit 2
    reg &= ~(1U << 2);
    printf("After clearing: %u\n", reg);

    // Toggle bit 2
    reg ^= (1U << 2);
    printf("After toggling: %u\n", reg);

    // Check bit 2
    if (reg & (1U << 2))
        printf("Bit 2 is ON\n");
    else
        printf("Bit 2 is OFF\n");

    return 0;
}
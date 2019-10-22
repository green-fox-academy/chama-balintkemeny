#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t byte)
{
    printf("%c%c%c%c %c%c%c%c\n",
           (byte & 0x80 ? '1' : '0'),
           (byte & 0x40 ? '1' : '0'),
           (byte & 0x20 ? '1' : '0'),
           (byte & 0x10 ? '1' : '0'),
           (byte & 0x08 ? '1' : '0'),
           (byte & 0x04 ? '1' : '0'),
           (byte & 0x02 ? '1' : '0'),
           (byte & 0x01 ? '1' : '0'));
}

uint8_t is_even(uint8_t input)
{
    return (input & 0b00000001) ^ 0b00000001;
}

uint8_t is_odd(uint8_t input)
{
    return input & 0b00000001;
}

int main()
{
    /* 1.
     * Write a function called IsEven which takes a byte and returns with true
     * if byte is even. Use only bitwise operators!
     */

    printf("%d\n", is_even(98));
    printf("%d\n", is_even(97));

    /* 2.
     * Write a function called IsOdd which takes a byte and returns with true
     * if byte is odd. Use only bitwise operators!
     */

    printf("%d\n", is_odd(98));
    printf("%d\n", is_odd(97));
    return 0;
}
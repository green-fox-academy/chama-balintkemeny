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

uint8_t count_ones(uint8_t input)
{
    uint8_t counter = 0;
    while (input != 0) {
        if (input & 1)
            ++counter;
        input >>= 1;
    }
    return counter;
}

uint8_t count_zeros(uint8_t input)
{
    uint8_t counter = 0;
    while (input != 0) {
        if (~input & 1)
            ++counter;
        input >>= 1;
    }
    return counter;
}

int main()
{
    /* 1.
     * Write a function called CountOnes which takes a byte returns
     * with the number of one bits in it.
     * E.g. byte = 0b1101 => returns with 3
     */
    printf("%d\n", count_ones(0b10010110));

    /* 2.
     * Write a function called CountZeros which takes a byte returns
     * with the number of zero bits in it.
     * E.g. byte = 0b1000 => returns with 3
     */
    printf("%d\n", count_zeros(0b00000110));

    return 0;
}
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

uint8_t rotate_right(uint8_t input, uint8_t cycles)
{
    for (uint8_t i = 0; i < cycles; ++i) {
        if (input & 0b00000001) {
            input >>= 1;
            input |= 0b10000000;
        } else {
            input >>= 1;
        }
    }
    return input;
}

uint8_t rotate_left(uint8_t input, uint8_t cycles)
{
    for (uint8_t i = 0; i < cycles; ++i) {
        if (input & 0b10000000) {
            input <<= 1;
            input |= 0b00000001;
        } else {
            input <<= 1;
        }
    }
    return input;
}

int main()
{
    /* 1.
     * Write a function called RotateRight which takes a byte and a number
     * and rotates the bits of byte in right direction number times.
     * It should return with the result.
     * E.g. byte = 0b1000000, number = 1 => returns 0b01000000
     * E.g. byte = 0b1000001, number = 2 => returns 0b01100000
     */
    for (uint8_t i = 0; i < 8; ++i) {
        print_binary(rotate_right(0b00110101, i));
    }
    printf("\n");

    /* 2.
     * Write a function called RotateLeft which takes a byte and a number
     * and rotates the bits of byte in left direction number times.
     * It should return with the result.
     * E.g. byte = 0b1000000, number = 1 => returns 0b00000001
     * E.g. byte = 0b1000001, number = 2 => returns 0b00000110
     */
    for (uint8_t i = 0; i < 8; ++i) {
        print_binary(rotate_left(0b00110101, i));
    }
    return 0;
}
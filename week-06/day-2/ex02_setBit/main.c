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

uint8_t set_bit(uint8_t input, uint8_t pos)
{
    if (pos > 7)
        pos = 7;

    uint8_t tmp = 1;
    /*
    for (uint8_t i = 0; i < pos; ++i) {
        tmp *= 2;
    }
    */

    tmp = tmp << pos;

    return input | tmp;
}

int main()
{
    /*
     * Write a function called SetBit which takes a byte and a bit position
     * and sets the bit of byte in the specified bit position to 1.
     * E.g. byte = 0b1100, bit position = 1 => returns with 0b1110
     */

    uint8_t test_byte = set_bit(0b00100000, 4);
    print_binary(test_byte);
    return 0;
}
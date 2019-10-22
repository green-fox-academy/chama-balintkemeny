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

uint8_t toggle_bit(uint8_t input, uint8_t pos)
{
    if (pos > 7)
        pos = 7;

    uint8_t tmp = 1;
    tmp <<= pos;

    return input ^ tmp;
}

int main()
{
    /*
     * Write a function called ToggleBit which takes a byte and a bit position
     * and toggles the bit of byte in the specified bit position.
     * E.g. byte = 0b1100, bit position = 1 => returns with 0b1110
     * E.g. byte = 0b1100, bit position = 2 => returns with 0b1000
     */

    print_binary(toggle_bit(0b00110011, 2));
    print_binary(toggle_bit(0b00110011, 0));
    return 0;
}
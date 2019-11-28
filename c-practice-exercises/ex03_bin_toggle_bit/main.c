#include <stdio.h>
#include <stdint.h>

void PrintBinary(uint8_t byte) {
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

void toggle_bit(uint8_t* byte, uint8_t pos)
{
    uint8_t toggle_key = 1 << pos;
    *byte ^= toggle_key;
}

int main() {
    /*
     * Write a function called ToggleBit which takes a byte and a bit position
     * and toggles the bit of byte in the specified bit position.
     * E.g. byte = 0b1100, bit position = 1 => returns with 0b1110
     * E.g. byte = 0b1100, bit position = 2 => returns with 0b1000
     */

    uint8_t byte = 0b11110000;
    PrintBinary(byte);
    for (int i = 0; i < 8; ++i) {
        toggle_bit(&byte, i);
        PrintBinary(byte);
    }
    return 0;
}
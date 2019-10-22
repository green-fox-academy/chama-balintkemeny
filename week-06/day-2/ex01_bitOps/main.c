
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

int main() {
    uint8_t myVar = 0b10100101;

    // 1. Print out myVar in decimal format
    // 2. Print out myVar in hexadecimal format
    // 3. Print out myVar in binary format using PrintBinary function

    printf("Decimal: %d\n", myVar);
    printf("Hexadecimal: %x\n", myVar);
    printf("Binary: ");
    PrintBinary(myVar);
    printf("\n");

    // For the following tasks please verify your results with PrintBinary function
    // 4. Create 0b01010000 value from myVar with shift operator
    printf("4.: ");
    uint8_t var_ex4 = myVar << 4;
    PrintBinary(var_ex4);

    // 5. Create 0b00101001 value from myVar with shift operator
    printf("5.: ");
    uint8_t var_ex5 = myVar >> 2;
    PrintBinary(var_ex5);

    // 6. Create 0b00100000 value from myVar with a single bitwise operator
    printf("6.: ");
    uint8_t var_ex6 = myVar & 0b00100000;
    PrintBinary(var_ex6);

    // 7. Create 0b11100101 value from myVar with a single bitwise operator
    printf("7.: ");
    uint8_t var_ex7 = myVar | 0b01000000;
    PrintBinary(var_ex7);

    // 8. Create 0b01011010 value form myVar with a single bitwise operator
    printf("8.: ");
    uint8_t var_ex8 = ~myVar;
    PrintBinary(var_ex8);

    return 0;
}
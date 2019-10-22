#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t byte)
{
    printf("%c%c%c%c %c%c%c%c ",
           (byte & 0x80 ? '1' : '0'),
           (byte & 0x40 ? '1' : '0'),
           (byte & 0x20 ? '1' : '0'),
           (byte & 0x10 ? '1' : '0'),
           (byte & 0x08 ? '1' : '0'),
           (byte & 0x04 ? '1' : '0'),
           (byte & 0x02 ? '1' : '0'),
           (byte & 0x01 ?'1' : '0'));
}

void array_rotator(void *ptr, uint32_t bytes, uint32_t rotation_count, uint8_t right)
{
    /* This function should rotate the ptr buffer bits by rotation_count to left or right direction.
     * The rotation direction is right if the right parameter is positive, left otherwise.
     * E.g. ptr ->  |   0xAA    |    0x55   |    0x23   |
     *              | 1010 1010 | 0101 0101 | 0010 0011 |
     * array_rotator(ptr, 3, 2, 1) result is:
     *              |   0xEA    |    0x95   |    0x48   |
     *              | 1110 1010 | 1001 0101 | 0100 1000 |
     */

    uint8_t* array = ptr;
    if (right) {
        //Rotate right
        for (uint8_t j = 0; j < rotation_count; ++j) {
            uint8_t tmp = 0b00000000;
            for (uint8_t i = 0; i < bytes; ++i) {
                uint8_t tmp2;
                if (array[i] & 0b00000001)
                    tmp2 = 0b10000000;
                else
                    tmp2 = 0b00000000;
                array[i] >>= 1;
                if (i != bytes - 1) {
                    array[i] |= tmp;
                } else {
                    array[i] |= tmp;
                    array[0] |= tmp2;
                }
                tmp = tmp2;
            }
        }
    } else {
        //Rotate left
        for (uint8_t j = 0; j < rotation_count; ++j) {
            uint8_t tmp = 0b00000000;
            for (uint8_t i = bytes - 1; ; i--) {
                uint8_t tmp2;
                if (array[i] & 0b10000000)
                    tmp2 = 0b00000001;
                else
                    tmp2 = 0b00000000;
                array[i] <<= 1;
                if (i != 0) {
                    array[i] |= tmp;
                } else {
                    array[0] |= tmp;
                    array[bytes - 1] |= tmp2;
                    break;
                }
                tmp = tmp2;
            }
        }
    }
}

int main()
{
    //test case bytes = 3
    uint8_t test_byte1 = 0b01001010;
    uint8_t test_byte2 = 0b11110011;
    uint8_t test_byte3 = 0b10010110;
    uint8_t test_bytes[3] = {test_byte1, test_byte2, test_byte3};

    for (uint8_t j = 0; j < 16; ++j) {
        array_rotator(test_bytes, 3, j, 1);
        for (uint8_t i = 0; i < 3; ++i) {
            print_binary(test_bytes[i]);
        }
        printf("\n");
    }

    return 0;
}
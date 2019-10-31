#include <stdio.h>
#include "asciigen.h"

int main() {
    unsigned int blah = read_bmp_size("../test1.bmp");
    printf("Size: %d\n", blah);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "asciigen.h"

int main() {
    int* bmp_metadata = read_bmp_metadata("../test1.bmp");
    printf("Size:   %d\n", bmp_metadata[0]);
    printf("Width:  %d\n", bmp_metadata[1]);
    printf("Height: %d\n", bmp_metadata[2]);
    printf("Depth:  %d\n", bmp_metadata[3]);
    free(bmp_metadata);
    return 0;
}
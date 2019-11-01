#include <stdio.h>
#include <stdlib.h>
#include "asciigen.h"

int main() {
    int* bmp_metadata = read_bmp_metadata("../test2.bmp");
    printf("Size:   %d\n", bmp_metadata[0]);
    printf("Width:  %d\n", bmp_metadata[1]);
    printf("Height: %d\n", bmp_metadata[2]);
    printf("Depth:  %d\n", bmp_metadata[3]);
    free(bmp_metadata);

    bmp_metadata_t real_metadata;
    get_bmp_metadata("../test2.bmp", &real_metadata);
    printf("File Size:   %d\n", real_metadata.file_size);
    printf("Width:  %d\n", real_metadata.pic_width);
    printf("Height: %d\n", real_metadata.pic_height);
    printf("Bits per pixel:  %d\n", real_metadata.bits_per_pixel);
    printf("Img Size: %d\n", real_metadata.image_size);

    draw_to_txt("../test2.bmp", "../test1.txt");
    return 0;
}
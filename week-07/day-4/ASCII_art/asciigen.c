#include "asciigen.h"
#include <stdio.h>

void print_help()
{
    printf("ASCII art generator application\n");
    printf("===============================\n");
    printf("\n");
    printf("asciiartgen <path-to-source-bmp> <options>...\n");
    printf("\n");
    printf("Available <options>:\n");
    printf("    -size               prints out the size of the BMP file in bytes\n");
    printf("    -w                  prints out the width of the BMP file\n");
    printf("    -h                  prints out the height of the BMP file\n");
    printf("    -depth              prints out the color depth of the BMP file\n");
    printf("    -o <path-to-txt>    specify where to put the resulting txt file\n");
    printf("    -mono               convert the BMP picture as monochromatic txt,\n");
    printf("                        non-white pixels will be represented with x characters\n");
    printf("    -mono <character>   convert the BMP picture as monochromatic txt,\n");
    printf("                        <character> will be used to represent non-white pixels\n");
    printf("    -regular            convert the BMP picture as multiple colored txt\n");
}

unsigned int read_bmp_size(char* file_path)
{
    unsigned int bmp_size = 1;
    FILE* fptr;
    fptr = fopen(file_path, "rb");
    if (!fptr)
        return 0;
    unsigned char input_buffer[6];
    unsigned long data_size = fread(input_buffer, sizeof(unsigned char), 6, fptr);
    for (unsigned long i = 0; i < data_size; i++) {
        printf("%2x: %2x\n", i, input_buffer[i]);
    }
    int* test_int_ptr = (int*)&input_buffer[2];
    bmp_size = *test_int_ptr;
    fclose(fptr);
    return bmp_size;
}
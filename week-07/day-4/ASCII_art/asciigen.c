#include "asciigen.h"
#include <stdio.h>
#include <stdlib.h>

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

int* read_bmp_metadata(char* file_path)
{
    FILE* fptr;
    fptr = fopen(file_path, "rb");
    if (!fptr)
        return 0;

    unsigned char input_buffer[54];
    unsigned long data_size = fread(input_buffer, sizeof(unsigned char), 54, fptr);
    fclose(fptr);

    int* bmp_metadata = (int*)calloc(4, sizeof(int));
    int* bmp_size_p = (int*)&input_buffer[2];
    int* bmp_width_p = (int*)&input_buffer[18];
    int* bmp_height_p = (int*)&input_buffer[22];
    int* bmp_depth_p = (int*)&input_buffer[46];

    bmp_metadata[0] = *bmp_size_p;
    bmp_metadata[1] = *bmp_width_p;
    bmp_metadata[2] = *bmp_height_p;
    bmp_metadata[3] = *bmp_depth_p;

    return bmp_metadata;
}
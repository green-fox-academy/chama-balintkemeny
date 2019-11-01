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

void get_bmp_metadata(char* src_path, bmp_metadata_t* metadata)
{
    FILE* fptr = fopen(src_path, "rb");
    if (!fptr) {
        return;
    }

    uint8_t input_buffer[54];
    fread(input_buffer, sizeof(uint8_t), 54, fptr);
    fclose(fptr);

    metadata->file_size = *((int*)&input_buffer[2]);
    metadata->pic_width = *((int*)&input_buffer[18]);
    metadata->pic_height = *((int*)&input_buffer[22]);
    metadata->bits_per_pixel = *((uint16_t*)&input_buffer[28]);
    metadata->image_size = *((int*)&input_buffer[34]);
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

void draw_to_txt(char* src_file_path, char* dest_file_path)
{
    FILE* in_ptr;
    in_ptr = fopen(src_file_path, "rb");
    if (!in_ptr)
        return;

    FILE* out_ptr;
    out_ptr = fopen(dest_file_path, "w");
    if (!out_ptr)
        return;

    int* bmp_metadata = read_bmp_metadata("../test1.bmp");
    unsigned char* pixel_data = (unsigned char*)calloc(bmp_metadata[0], sizeof(unsigned char)); //bits per pixelt kellene
    unsigned long int tmp_size = fread(pixel_data, sizeof(unsigned char), bmp_metadata[0], in_ptr);
    fclose(in_ptr);

    //only for testing purposes
    for (unsigned long int i = 0; i < tmp_size; ++i) {
        printf("%4lx: %3d\n", i, pixel_data[i]);
    }

    uint16_t* bits_per_pixel = (uint16_t*)&pixel_data[0x1c];
    printf("Size of 'uint16_t': %lu\n", sizeof(uint16_t));
    printf("Bits per pixel data: %d\n", *bits_per_pixel);
    //end testing

    //new pointer for pixel_data at bmp_data + 54
    for (int i = 0; i < bmp_metadata[1]; ++i) {
        for (int j = 0; j < bmp_metadata[2]; ++j) {
            if (pixel_data[i * bmp_metadata[2] + j + 54]) {
                fputc('@', out_ptr);
            } else {
                fputc(' ', out_ptr);
            }
        }
        fputc('\n', out_ptr);
    }
    fclose(out_ptr);
}
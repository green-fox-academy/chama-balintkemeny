#ifndef ASCII_ART_ASCIIGEN_H
#define ASCII_ART_ASCIIGEN_H
#include <stdint.h>

typedef struct {
    int file_size;
    int pic_width;
    int pic_height;
    uint16_t bits_per_pixel;
    int image_size;
} bmp_metadata_t;

void print_help();
void get_bmp_metadata(char* src_path, bmp_metadata_t* metadata);
int* read_bmp_metadata(char* file_path);
void draw_to_txt(char* src_file_path, char* dest_file_path);

#endif //ASCII_ART_ASCIIGEN_H

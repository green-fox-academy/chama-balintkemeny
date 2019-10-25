#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main ()
{
    FILE* fptr;
    fptr = fopen("../my-file.txt", "w");
    if (!fptr) return -1;
    for (int tmp_out = 'A'; tmp_out <= 'Z'; ++tmp_out) {
        fputc(tmp_out, fptr);
        fputc('\n', fptr);
    }
    fclose(fptr);

    fptr = fopen("../my-file.txt", "r");
    if (!fptr) return -1;

    int tmp_in;
    do {
        tmp_in = fgetc(fptr);
        printf("%c", tmp_in);
    } while (tmp_in != EOF);
    fclose(fptr);
    return 0;
}
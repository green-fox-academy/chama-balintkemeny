#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{
    FILE* fptr;
    fptr = fopen("../my-file.txt", "w");
    if (!fptr) return -1;

    char out[] = "Balint Kemeny";
    int len = sizeof(out) / sizeof(out[0]);
    for (int i = 0; i < len - 1; ++i) {
        fputc(out[i], fptr);
    }

    fclose(fptr);
    return 0;
}
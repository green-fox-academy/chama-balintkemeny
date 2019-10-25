#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int cnt_lines(char* file_path)
{
    FILE* fptr;
    fptr = fopen(file_path, "r");
    if (!fptr) return -1;

    int cnt = 0;
    int tmp;
    do {
        tmp = fgetc(fptr);
        if (tmp == '\n') ++cnt;
    } while (tmp != EOF);
    fclose(fptr);

    return cnt;
}

int main ()
{
    char file_path[] = "../input.txt";
    printf("Number of lines is: %d\n", cnt_lines(file_path));
    return 0;
}
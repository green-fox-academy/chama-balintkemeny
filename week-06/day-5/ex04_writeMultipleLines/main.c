#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

int write_multi_lines(char* path, char* word, int line_cnt)
{
    FILE* fptr;
    fptr = fopen(path, "w");
    if (!fptr) return -1;

    char print_word[255];
    strcpy(print_word, word);
    strcat(print_word, "\n");

    for (int i = 0; i < line_cnt; ++i) {
        fputs(print_word, fptr);
    }

    fclose(fptr);
    return 0;
}

int main()
{
    int exit_flag = write_multi_lines("../output.txt", "apple", 7);
    printf("Write function exit flag: %d\n", exit_flag);

    return 0;
}
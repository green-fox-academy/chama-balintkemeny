#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void str_splitter(char* input_str)
{
    char* str_buffer;
    str_buffer = strtok(input_str, " ");
    while (str_buffer) {
        printf("%s\n", str_buffer);
        str_buffer = strtok(NULL, " ");
    }
}

int main()
{
    printf("Type in a sentence:\n");
    char string[256] = "";
    scanf("%[^\n]s", string);

    str_splitter(string);
    return(0);
}
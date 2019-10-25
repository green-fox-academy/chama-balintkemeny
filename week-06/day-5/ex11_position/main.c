#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void i_pos_lister(const char* input_string, int len)
{
    for (int i = 0; i < len; ++i) {
        if (input_string[i] == 'i') {
            printf("Character 'i' found at position: %d\n", i);
        }
    }
}

int main ()
{
    char string[55] = "This is a string for testing";
    i_pos_lister(string, sizeof(string) / sizeof(char));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char* str_repeater(const char* str_in, unsigned int multiplier)
{
    unsigned int str_len = 0;
    while (str_in[str_len] != '\0') {
        str_len++;
    }

    char* str_out = (char*)malloc((multiplier * str_len + 1) * sizeof(char));
    for (unsigned int i = 0; i < multiplier; ++i) {
        for (unsigned int j = 0; j < str_len; ++j) {
            *(str_out + (i * str_len) + j) = *(str_in + j);
        }
    }
    *(str_out + multiplier * str_len) = '\0';
    return str_out;
}

int main()
{
    char* test_str = str_repeater("Apple", 5);
    printf("%s", test_str);
    free(test_str);
    return 0;
}
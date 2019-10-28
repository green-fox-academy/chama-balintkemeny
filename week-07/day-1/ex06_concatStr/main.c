#include <stdio.h>
#include <stdlib.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* concat_str(const char* str1, const char* str2)
{
    int len_str1 = 0;
    int len_str2 = 0;

    while (str1[len_str1] != '\0') {
        len_str1++;
    }
    while (str2[len_str2] != '\0') {
        len_str2++;
    }

    char* output_str = (char*)malloc((len_str1 + len_str2 + 1) * sizeof(char));
    for (int i = 0; i < len_str1; ++i) {
        *(output_str + i) = *(str1 + i);
    }
    for (int i = 0; i < len_str2; ++i) {
        *(output_str + len_str1 + i) = *(str2 + i);
    }
    *(output_str + len_str1 + len_str2) = '\0';

    return output_str;
}

int main()
{
    char* test_concat = concat_str("pine", "apple");
    printf("%s\n", test_concat);
    free(test_concat);

    return 0;
}
#include <stdio.h>
#include <string.h>

void append_a(char* input)
{
    strcat(input, "a\0");
}

int main() {
    char test_str[1024] = "";
    strcat(test_str, "test stringy");
    append_a(test_str);
    printf("%s\n", test_str);

    /*
    for (int i = 0; i < 1024; ++i) {
        char test_char = test_str[i];
        printf("%c\n", test_char);
    }
     */

    return 0;
}
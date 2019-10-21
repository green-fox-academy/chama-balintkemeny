#include <stdio.h>
#include <string.h>

int length_of_str(char input[])
{
    int i = 0;
    while (input[i] != '\0')
        ++i;
    return i;
}

int main() {
    char str[] = "This is a string.";
    int len = length_of_str(str);
    printf("The string is %d characters long.\n", len);
    printf("The string is %lu characters long.\n", strlen(str));
    return 0;
}
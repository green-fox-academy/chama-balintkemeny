#include <stdio.h>
#include <string.h>

int index_of_char(char str[], char ch)
{
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == ch)
            return i;
    }
    return -1;
}

int main()
{
    char test_string[] = "embedded";
    char test_ch = 'd';
    int index = index_of_char(test_string, test_ch);
    printf("The index of the searched character is: %d\n", index);

    return 0;
}
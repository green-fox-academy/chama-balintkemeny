#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurrence of character 's'

int distance_between(const char* input_string, int len, char searched_char)
{
    int index_first = -1;
    int index_last = -1;

    for (int i = 0; i < len; ++i) {
        if (input_string[i] == searched_char) {
            if (index_first == -1)
                index_first = i;
            else
                index_last = i;
        }
    }

    printf("First occurrence: %d, last occurrence: %d\n", index_first, index_last);
    return index_last - index_first;
}

int main ()
{
    char str[] = "This is a sample string";
    printf("Distance: %d\n", distance_between(str, sizeof(str) / sizeof(char), 's'));

    return 0;
}
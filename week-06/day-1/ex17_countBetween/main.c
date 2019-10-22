#include <stdio.h>
#include <string.h>

int count_between_chars(char* str, char key)
{
    int counter = 0;
    int index_start = 0;
    int index_end = 0;

    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == key){
            ++counter;
        }
        if (counter == 1 && index_start == 0) {
            index_start = i;
        } else if (counter == 2) {
            index_end = i;
            break;
        }
    }
    return index_end - index_start - 1;
}

int main() {
    printf("Number between two g-s: %d\n", count_between_chars("programming", 'g'));
    return 0;
}
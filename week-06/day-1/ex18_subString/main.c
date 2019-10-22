#include <stdio.h>
#include <string.h>

int is_substring(char* str1, char* str2)
{
    if (strlen(str1) == strlen(str2)) {
        return -1;
    } else if (strlen(str1) < strlen(str2)) {
        char* tmp_str;
        tmp_str = str1;
        str1 = str2;
        str2 = tmp_str;
    }

    int is_substr = 0;

    for (int i = 0; i <= strlen(str1) - strlen(str2); ++i) {
        if (str1[i] != str2[0])
            continue;
        is_substr = 1;
        for (int j = 0; j < strlen(str2); ++j) {
            if (str1[i + j] != str2[j])
                is_substr = 0;
        }
        if (is_substr)
            break;
    }

    return is_substr;
}

int main() {
    char* test_string1 = "lak";
    char* test_string2 = "ablak";
    printf("%d\n", is_substring(test_string1, test_string2));
    return 0;
}
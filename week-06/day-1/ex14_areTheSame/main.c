#include <stdio.h>
#include <string.h>

int str_is_equal(char a[], char b[])
{
    if (strlen(a) != strlen(b))
        return 0;

    for (int i = 0; i < strlen(a); ++i) {
        if (a[i] != b[i]) {
            if (a[i] < 91 && a[i] > 64 && a[i] + 32 != b[i])
                return 0;
            else if (a[i] > 96 && a[i] < 123 && a[i] - 32 != b[i])
                return 0;
            else if (a[i] < 65 || a[i] > 122)
                return 0;
            else if (a[i] > 90 && a[i] < 97)
                return 0;
        }
    }
    return 1;
}

int main()
{
    char str_a[] = "stringy string";
    char str_b[] = "Stringy String";

    if (!strcmp(str_a, str_b))
        printf("The two strings are the same!\n");
    else
        printf("The two strings are not the same!\n");

    if (str_is_equal(str_a, str_b))
        printf("The two strings are the same!\n");
    else
        printf("The two strings are not the same!\n");
    return 0;
}
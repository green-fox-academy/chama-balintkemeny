#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Every line contains the name of the group and after a colon, the height of people in the group separated by commas
// Find the group where the median is the lowest.
// Note that the groups do not necessarily contain the same amount of people

int main()
{
    FILE* f_ptr;
    f_ptr = fopen("../input.txt", "r");
    char temp_array[256];
    int rows = 0;
    while (fscanf(f_ptr, " %[^\n]", temp_array) == 1) {
        rows++;
    }
    rewind(f_ptr);

    char* row_data = (char*)calloc(rows, 256);
    for (int i = 0; i < rows; ++i) {
        fscanf(f_ptr, " %[^\n]", row_data + (i * 256));
    }
    fclose(f_ptr);

    printf("Number of rows: %d\n", rows);
    for (int i = 0; i < rows; ++i) {
        printf("%s\n", row_data + (i * 256));
    }

    for (int i = 0; i < rows; ++i) {
        for (char *p = strtok(row_data + (i * 256), ":"); p != NULL; p = strtok(NULL, " "))
        {
            puts(p);
        }
        printf("\n");
    }


    return 0;
}
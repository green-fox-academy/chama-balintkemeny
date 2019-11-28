#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Every line contains the name of the group and after a colon, the height of people in the group separated by commas
// Find the group where the median is the lowest.
// Note that the groups do not necessarily contain the same amount of people

typedef struct {
    int group_id;
    int people_qty;
    int median_height;
    int* people_heights;
    char raw_data[256];
} group_t;

void swap_element(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int* int_array, int num_elements)
{
    int swap_flag;
    for (int i = 0; i < num_elements - 1; ++i) {
        swap_flag = 0;
        for (int j = 0; j < num_elements - i - 1; ++j) {
            if (*(int_array + j) > *(int_array + j + 1)) {
                swap_element(int_array + j, int_array + j + 1);
                swap_flag = 1;
            }
        }
        if (!swap_flag)
            break;
    }
}

int main()
{
    //OPEN FILE
    FILE* f_ptr;
    f_ptr = fopen("../input.txt", "r");

    //DETERMINE ROW COUNT
    char temp_array[256];
    int rows = 0;
    while (fscanf(f_ptr, " %[^\n]", temp_array) == 1) {
        rows++;
    }
    rewind(f_ptr);

    //DYNAMICALLY CREATE GROUPS
    group_t* groups = (group_t*)calloc(rows, sizeof(group_t));

    //SCAN DATA
    for (int i = 0; i < rows; ++i) {
        fscanf(f_ptr, " %[^\n]", (groups + i)->raw_data);
    }
    fclose(f_ptr);

    //COUNT NUMBER OF PEOPLE PER GROUPS AND ALLOCATE MEMORY
    for (int i = 0; i < rows; ++i) {
        (groups + i)->group_id = i;
        (groups + i)->people_qty = 0;
        for (int j = 0; j < 256; ++j) {
            if ((groups + i)->raw_data[j] == ',') {
                (groups + i)->people_qty++;
            }
        }
        (groups + i)->people_qty++;
        (groups + i)->people_heights = (int*)calloc((groups + i)->people_qty, sizeof(int));
    }

    //PARSE DATA
    for (int i = 0; i < rows; ++i) {
        int index = 0;
        for (char *p = strtok((groups + i)->raw_data + 8, ","); p != NULL; p = strtok(NULL, ",")) {
            (groups + i)->people_heights[index] = (int)strtol(p, NULL, 10);
            index++;
        }
    }

    //SORT DATA AND DETERMINE MEDIAN
    for (int i = 0; i < rows; ++i) {
        bubble_sort((groups + i)->people_heights, (groups + i)->people_qty);
        if ((groups + i)->people_qty % 2) {
            (groups + i)->median_height = (groups + i)->people_heights[(groups + i)->people_qty / 2];
        } else {
            int h1 = (groups + i)->people_heights[(groups + i)->people_qty / 2 - 1];
            int h2 = (groups + i)->people_heights[(groups + i)->people_qty / 2];
            (groups + i)->median_height = (h1 + h2) / 2;
        }
    }

    //DETERMINE LOWEST MEDIAN GROUP
    int min_median = 1000;
    int min_median_index = 0;
    for (int i = 0; i < rows; ++i) {
        if ((groups + i)->median_height < min_median) {
            min_median = (groups + i)->median_height;
            min_median_index = (groups + i)->group_id;
        }
    }

    //AUX PRINT
    for (int i = 0; i < rows; ++i) {
        printf("%d.: %d\n", (groups + i)->group_id, (groups + i)->people_qty);
    }

    for (int i = 0; i < rows; ++i) {
        printf("MEDIAN: %d, VAL: ", (groups + i)->median_height);
        for (int j = 0; j < (groups + i)->people_qty; ++j) {
            printf("%d ", (groups + i)->people_heights[j]);
        }
        printf("\n");
    }

    printf("The group with the minimum median height is group %d\n", min_median_index + 1);

    //FREE MEMORY FROM HEAP
    for (int i = 0; i < rows; ++i) {
        free((groups + i)->people_heights);
    }
    free(groups);

    return 0;
}
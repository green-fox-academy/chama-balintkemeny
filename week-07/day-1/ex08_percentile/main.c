#include <stdio.h>
#include <stdlib.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

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

int nth_percentile(int* matrix, int num_elements, float n_percentage)
{
    if (n_percentage > 100.0f || n_percentage < 0.0f || num_elements < 1 || matrix == NULL)
        return -1;

    float tmp_index = ((float)num_elements * (n_percentage / 100.0f));
    int index = (int)tmp_index;
    bubble_sort(matrix, num_elements);

    return *(matrix + index);
}

void print_matrix(const int* matrix, int mat_rows, int mat_cols)
{
    for (int i = 0; i < mat_rows; ++i) {
        for (int j = 0; j < mat_cols; ++j) {
            printf("%d", *(matrix + (i * mat_cols) + j));
            if (j != mat_cols - 1)
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int mat_rows;
    int mat_cols;

    printf("Please enter the number of rows:\n");
    scanf("%d", &mat_rows);
    printf("Please enter the number of columns:\n");
    scanf("%d", &mat_cols);

    int* matrix = (int*)malloc(mat_rows * mat_cols * sizeof(int));
    int tmp_int;
    for (int i = 0; i < mat_rows; ++i) {
        for (int j = 0; j < mat_cols; ++j) {
            printf("Please enter a value for the element in row: %d, column: %d\n", i, j);
            scanf("%d", &tmp_int);
            *(matrix + (i * mat_cols) + j) = tmp_int;
        }
    }

    printf("%d\n", nth_percentile(matrix, mat_rows * mat_cols, 80.0f));
    printf("%d\n", nth_percentile(matrix, mat_rows * mat_cols, 90.0f));
    free(matrix);
    return 0;
}
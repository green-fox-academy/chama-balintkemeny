#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// the resulting array should be 20 elements long
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int* arr1 = (int*)malloc(10 * sizeof(int));
    int* arr2 = (int*)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        *(arr1 + i) = 2 * (i + 1);
        *(arr2 + i) = 2 * (i + 1) - 1;
    }

    for (int i = 0; i < 10; ++i) {
        printf("Pointer 1: %p; Value 1: %d; Pointer 2: %p; Value 2: %d\n",
                arr1 + i, *(arr1 + i), arr2 + i, *(arr2 + i));
    }
    printf("\n");

    arr1 = realloc(arr1, 20 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        *(arr1 + i + 10) = *(arr2 + i);
    }
    free(arr2);

    for (int i = 9; i >= 0; --i) {
        printf("Pointer: %p; Value: %d\n", arr1 + i, *(arr1 + i)); //Even values
        printf("Pointer: %p; Value: %d\n", arr1 + 10 + i, *(arr1 + 10 + i)); //Odd values
    }
    free(arr1);
    return 0;
}
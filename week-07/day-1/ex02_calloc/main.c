#include <stdio.h>
#include <stdlib.h>

// with calloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits
// what's the difference between this and the previous exercise?

int main()
{
    int* pointer = (int*)calloc(10, sizeof(int));
    for (int i = 0; i < 5; ++i) {
        *(pointer + i) = i;
    }
    for (int i = 0; i < 10; ++i) {
        printf("Pointer: %p; Value: %d\n", pointer + i, *(pointer + i));
    }
    free(pointer);
    return 0;
}
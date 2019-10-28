#include <stdio.h>
#include <stdlib.h>

// Please use the realloc function where applicable!
// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int cnt_numbers;
    printf("Please enter how many numbers you want to allocate memory for:\n");
    scanf("%d", &cnt_numbers);

    int* arr_numbers = (int*)malloc(cnt_numbers * sizeof(int));
    int sum = 0;
    printf("Please enter that many numbers:\n");
    for (int i = 0; i < cnt_numbers; ++i) {
        scanf("%d", arr_numbers + i);
        sum += *(arr_numbers + i);
    }

    arr_numbers = (int*)realloc(arr_numbers, sum * sizeof(int));
    for (int i = 0; i < sum; ++i) {
        *(arr_numbers + i) = i + 1;
        printf("%d\n", *(arr_numbers + i));
    }

    arr_numbers = (int*)realloc(arr_numbers, 0);
    arr_numbers = NULL;
    return 0;
}
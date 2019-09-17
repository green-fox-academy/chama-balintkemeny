#include <iostream>

int* minpointer (int arr [], int len);

int main() {
    int testArray[5] = {3, 2, 5, 6, 7};
    int testArraySize = 5;

    int *ptrToMinTest = minpointer(testArray, testArraySize);

    std::cout << &testArray[1] << " vs " << ptrToMinTest << std::endl;

    return 0;
}

int* minpointer (int arr[], int len) {
    int min = arr[0];
    int j = 0;
    for (int i = 0; i < len; ++i) {
        if (arr [i] < min) {
            min = arr[i];
            j = i;
        }
    }
    return &arr[j];
}
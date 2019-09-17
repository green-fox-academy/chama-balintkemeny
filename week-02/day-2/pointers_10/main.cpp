#include <iostream>

int maximumFinder (int *arr, int len);

int main() {
    std::cout << "How many integers do you want to store in your array?" << std::endl;
    int testArraySize;
    std::cin >> testArraySize;

    int testArray[testArraySize];
    std::cout << "Please enter the integer elements of your array:" << std::endl;

    for (int i = 0; i < testArraySize; ++i) {
        std::cin >> testArray[i];
    }

    int *ptrToArray = &testArray[0];
    int j = maximumFinder(ptrToArray, testArraySize);

    std::cout << testArray[j] << " : " << &testArray[j] << std::endl;
    return 0;
}

int maximumFinder (int *arr, int len) {
    int max = *arr;
    int j = 0;
    for (int i = 0; i < len; ++i) {
        if (*(arr + i) > max) {
            max = *(arr + i);
            j = i;
        }
    }
    return j;
}


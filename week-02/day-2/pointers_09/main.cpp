#include <iostream>

int lookForValue (int *ptrToArr, int len, int x);

int main() {

    int testArray[5];
    int testArraySize = 5;

    std::cout << "Please enter 5 integers:" << std::endl;

    for (int i = 0; i < testArraySize; ++i) {
        std::cin >> testArray[i];
    }

    std::cout << "Please enter the number you look for:" << std::endl;

    int x;
    std::cin >> x;

    int *ptrToArray = &testArray[0];
    int j = lookForValue(ptrToArray, testArraySize, x);

    std::cout << j << std::endl;

    return 0;
}

int lookForValue (int *ptrToArr, int len, int x) {
    int j = -1;
    for (int i = 0; i < len; ++i) {
        if (*(ptrToArr + i) == x) {
            j = i;
        }
    }
    return j;
}
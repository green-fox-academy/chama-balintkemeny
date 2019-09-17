#include <iostream>

int main() {
    int testArray[5];
    int testArraySize = 5;
    std::cout << "Please enter 5 integer values:" << std::endl;

    for (int i = 0; i < testArraySize; ++i) {
        std::cin >> testArray[i];
    }

    int *ptrToTestArray = &testArray[0];

    for (int j = 0; j < testArraySize; ++j) {
        std::cout << *(ptrToTestArray + j) << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {

    int testArray[5];
    int testArraySize = 5;
    std::cout << "Please enter 5 integer values:" << std::endl;

    for (int i = 0; i < testArraySize; ++i) {
        std::cin >> testArray[i];
    }

    for (int j = 0; j < testArraySize; ++j) {
        std::cout << &testArray[j] << " : " << testArray[j] << std::endl;
    }

    return 0;
}
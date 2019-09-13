#include <iostream>


int main() {

    int numList[5] = {3, 4, 5, 6, 7};

    /*for (int & i : numList) {
        i *= 2;
        std::cout << i << std::endl;
    } */

    for (int i = 0; i < 5; ++i) {
        numList[i] *= 2;
        std::cout << numList[i] << std::endl;
    }

    return 0;
}
#include <iostream>

int main() {
    int numbers[4] = {4, 5, 6, 7};

    for (int i = 0; i < 4; ++i) {
        std::cout << "The " << i + 1 << ". element is: " << numbers[i] << std::endl;
    }

    return 0;
}
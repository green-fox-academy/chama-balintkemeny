#include <iostream>

int main() {
    int p1[3] = {1, 2, 3};
    int p2[2] = {4, 5};

    if (sizeof(p2) / sizeof(p2[0]) > sizeof(p1) / sizeof(p1[0])) {
        std::cout << "p2 is longer" << std::endl;
    } else {
        std::cout << "p2 is not longer" << std::endl;
    }

    return 0;
}
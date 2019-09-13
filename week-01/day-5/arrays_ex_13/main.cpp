#include <iostream>

int main() {

    int aj[5] = {3, 4, 5, 6, 7};
    int revAj[5];

    for (int i = 0; i < 5; ++i) {
        revAj[i] = aj[4-i];
    }

    for (int j = 0; j < 5; ++j) {
        aj[j] = revAj[j];
        std::cout << aj[j] << std::endl;
    }

    return 0;
}
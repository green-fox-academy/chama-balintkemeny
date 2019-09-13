#include <iostream>

int main() {

    int ai[5] = {3, 4, 5, 6, 7};
    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        sum += ai[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
#include <iostream>
int doubling(int x);

int main() {

    int baseNum = 123;
    std::cout << doubling(baseNum) << std::endl;

    return 0;
}

int doubling(int x) {
    x *= 2;
    return x;
}
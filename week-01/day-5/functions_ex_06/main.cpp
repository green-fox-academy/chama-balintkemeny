#include <iostream>
void factorio (int x, int& y);

int main() {

    int n = 5;
    int overWrite = 0;
    factorio(n, overWrite);
    std::cout << overWrite << std::endl;

    return 0;
}

void factorio (int x, int& y) {
    y = 1;
    for (int i = 0; i < x; ++i) {
        y *= i + 1;
    }
}
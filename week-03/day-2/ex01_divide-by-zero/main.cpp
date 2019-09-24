#include <iostream>

void divideTen (int x) {
    if (x == 0) {
        std::cout << "fail" << std::endl;
    } else {
        std::cout << 10 / x << std::endl;
    }
}

int main() {
    int x;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> x;
    divideTen(x);
    return 0;
}
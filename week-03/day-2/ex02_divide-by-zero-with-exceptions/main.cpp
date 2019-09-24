#include <iostream>

void divideTen (int x) {
    if (x == 0) {
        throw std::string("fail");
    }
    std::cout << 10.0 / x << std::endl;
}

int main() {
    int x;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> x;
    try {
        divideTen(x);
    } catch (std::string errorMsg) {
        std::cout << errorMsg << std::endl;
    }
    return 0;
}
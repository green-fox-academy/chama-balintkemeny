#include <iostream>

int main() {

    //Count from-to:
    int a;
    int b;

    std::cout << "Please enter a whole number:" << std::endl;
    std::cin >> a;
    std::cout << "Please enter another whole number:" << std::endl;
    std::cin >> b;

    if (a >= b) {
        std::cout << "The second number should be bigger!" << std::endl;
    } else {
        while (a < b) {
            std::cout << a << std::endl;
            a++;
        }
    }

    return 0;
}
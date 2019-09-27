#include <iostream>

int sumDigits(int n) {
    if (n < 1) {
        return 0;
    } else {
        int sum = 0;
        sum = n % 10 + sumDigits(n / 10);
        return sum;
    }
}

int main() {
    int n;
    std::cout << "Please enter an integer:" << std::endl;
    std::cin >> n;
    std::cout << "The sum of its digits is: " << sumDigits(n) << std::endl;
    return 0;
}
#include <iostream>

int numberAdder(int n) {
    if (n < 1) {
        return 0;
    }
    else {
        int ans = n + numberAdder(n - 1);
        return ans;
    }
}

int main() {
    std::cout << numberAdder(6) << std::endl;
    return 0;
}
#include <iostream>
int sum (int x);

int main() {
    std::cout << sum(5) << std::endl;
    return 0;
}

int sum (int x) {
    int varSum = 0;
    for (int i = 0; i <= x; ++i) {
        varSum += i;
    }
    return varSum;
}
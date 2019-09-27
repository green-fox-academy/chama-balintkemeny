#include <iostream>

int iterativeGreatestCommonDivisor(int x, int y) {
    int a;
    if (x < 1 || y < 1) {
        return -1;
    } else if (x > y) {
        a = y;
        while (x % a != 0 || y % a != 0) {
            a--;
        }
        return a;
    } else {
        a = x;
        while (x % a != 0 || y % a != 0) {
            a--;
        }
        return a;
    }
}

int recursiveGreatestCommonDivisor(int x, int y, int a) {
    if (x % a == 0 && y % a == 0) {
        return a;
    } else {
        return recursiveGreatestCommonDivisor(x, y, a - 1);
    }
}

int euclidIsYourNewGod (int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return euclidIsYourNewGod(y, x % y);
    }
}

int main() {
    int x = 525;
    int y = 645;
    int a;
    if (x < y) a = x;
    else a = y;

    std::cout << iterativeGreatestCommonDivisor(x, y) << std::endl;
    std::cout << recursiveGreatestCommonDivisor(x, y, a) << std::endl;
    std::cout << euclidIsYourNewGod(x, y) << std::endl;
    return 0;
}
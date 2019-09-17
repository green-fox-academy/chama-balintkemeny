#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<unsigned int> personalFinance = {500, 1000, 1250, 175, 800, 120};
    int sum = 0;
    for (int article : personalFinance) {
        sum += article;
    }

    std::vector<unsigned int>::iterator it = std::max_element(personalFinance.begin(), personalFinance.end());
    std::cout << sum << std::endl;

    int ;
    std::cout << "" << std::endl;
    return 0;
}
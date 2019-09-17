#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<unsigned int> personalFinance = {500, 1000, 1250, 175, 800, 120};
    int sum = 0;
    int max = personalFinance[0];
    int min = personalFinance[0];
    for (int article : personalFinance) {
        sum += article;
        if (article > max) {
            max = article;
        }
        if (article < min) {
            min = article;
        }
    }
    float avg = (float)sum / personalFinance.size();

    std::cout << "Total spent: " << sum << std::endl;
    std::cout << "Greatest expense: " << max << std::endl;
    std::cout << "Cheapest spending: " << min << std::endl;
    std::cout << "Average spending: " << avg << std::endl;
    return 0;
}
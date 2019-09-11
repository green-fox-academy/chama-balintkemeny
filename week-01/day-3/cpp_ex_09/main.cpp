#include <iostream>

int main() {

    //Average of input
    int a;
    int b;
    int c;
    int d;
    int e;

    std::cout << "Please enter an integer value:" << std::endl;
    std::cin >> a;

    std::cout << "Please enter another integer value:" << std::endl;
    std::cin >> b;

    std::cout << "Please enter another integer value:" << std::endl;
    std::cin >> c;

    std::cout << "Please enter another integer value:" << std::endl;
    std::cin >> d;

    std::cout << "The last one pretty please:" << std::endl;
    std::cin >> e;

    int sum = a + b + c + d + e;
    double average = (a + b + c + d + e) / 5.;

    std::cout << "Sum: " << sum << ", ";
    std::cout << "Average: " << average << std::endl;

    return 0;
}
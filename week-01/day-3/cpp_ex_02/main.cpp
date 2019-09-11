#include <iostream>

int main() {

    //Let's print my name!
    std::cout << "Balint Kemeny!" << std::endl;

    //Let's print my age!
    std::cout << 26 << std::endl;

    //Let's print my height!
    std::cout << 1.86 << std::endl;

    //Let's insert a blank line!
    std::cout << "\n";

    //Let's do the math exercise!
    std::cout << 22 + 13 << std::endl;
    std::cout << 22 - 13 << std::endl;
    std::cout << 22 * 13 << std::endl;
    std::cout << 22. / 13 << std::endl;
    std::cout << 22 / 13 << std::endl;
    std::cout << 22 % 13 << std::endl;

    //Coding hours
    int codingHours = 17 * 5 * 6;
    std::cout << "A Green Fox attendee spends " << codingHours << " hours coding in a semester." << std::endl;

    int workingHours = 17 * 52;
    std::cout << "That's " << ((float)codingHours / workingHours * 100) << "% of total working hours" << std::endl;
    return 0;
}
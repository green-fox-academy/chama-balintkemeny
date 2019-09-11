#include <iostream>

int main() {

    //Party indicator (My favourite exercise so far)
    int numberOfGirls;
    int numberOfBoys;

    std::cout << "How many girls are coming to the party? <3" << std::endl;
    std::cin >> numberOfGirls;

    std::cout << "How many boys are coming to the party?" << std::endl;
    std::cin >> numberOfBoys;

    if (numberOfGirls == 0) {
        std::cout << "Sausage party!" << std::endl;
    } else if (numberOfGirls + numberOfBoys >= 20) {
        if(numberOfGirls == numberOfBoys) {
            std::cout << "The party is excellent!" << std::endl;
        } else {
            std::cout << "Quite cool party!" << std::endl;
        }
    } else {
        std::cout << "Average party..." << std::endl;
    }

    return 0;
}
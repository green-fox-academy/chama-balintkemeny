#include <iostream>

int main() {

    //Mile to km converter
    double distanceInMiles;
    double distanceInKilometers;

    std::cout << "Please enter a distance in miles:" << std::endl;
    std::cin >> distanceInMiles;

    distanceInKilometers = distanceInMiles * 1.609344;
    std::cout << "The distance entered is " << distanceInKilometers << " kilometers." << std::endl;
    return 0;
}
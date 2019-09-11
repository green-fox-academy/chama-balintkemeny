#include <iostream>

int main() {

    //Cuboid exercise
    double a = 3;
    double b = 4;
    double c = 5;

    double area = 2*a*b + 2*a*c + 2*b*c;
    double volume = a*b*c;

    std::cout << "Surface Area: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}
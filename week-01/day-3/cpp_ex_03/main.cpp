#include <iostream>
#include <cmath>

int main() {

    //Useful stuff: see the difference between x++ and ++x
    int e = 12;
    std::cout << e-- << std::endl;
    std::cout << e << std::endl;

    int f = 12;
    std::cout << --f << std::endl;
    std::cout << f << std::endl;
    std::cout << "\n";

    //Favourite number
    int favouriteNumber = 11;
    std::cout << "My favourite number is: " << favouriteNumber << std::endl;
    std::cout << "\n";

    //Swap integers
    int a = 123;
    int b = 526;
    int c;

    c = a;
    a = b;
    b = c;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "\n";

    //BMI
    double massInKg = 81.2;
    double heightInM = 1.78;
    double BMI;

    BMI = massInKg / pow(heightInM, 2);
    std::cout << BMI << std::endl;
    std::cout << "\n";

    //Define Basic Info
    std::string myName = "Balint";
    int myAge = 26;
    double myHeight = 1.86;
    bool ifMarried = false;

    std::cout << myName << std::endl;
    std::cout << myAge << std::endl;
    std::cout << myHeight << std::endl;
    std::cout << ifMarried << std::endl;
    std::cout << "\n";

    //Variable Mutation
    int vm_a = 3;
    vm_a += 10;
    std::cout << vm_a << std::endl;

    int vm_b = 100;
    vm_b -= 7;
    std::cout << vm_b << std::endl;

    int vm_c = 44;
    vm_c *= 2;
    std::cout << vm_c << std::endl;

    int vm_d = 125;
    vm_d /= 5;
    std::cout << vm_d << std::endl;

    int vm_e = 8;
    vm_e = pow(vm_e, 3);
    std::cout << vm_e << std::endl;

    int vm_f1 = 123;
    int vm_f2 = 345;
    std::cout << (vm_f1 > vm_f2) << std::endl;

    int vm_g1 = 350;
    int vm_g2 = 200;
    std::cout << ((2 * vm_g2) > vm_g1) << std::endl;

    int vm_h = 135798745;
    std::cout << ((vm_h % 11) == 0) << std::endl;

    int vm_i1 = 10;
    int vm_i2 = 3;
    std::cout << ((vm_i1 > pow(vm_i2, 2)) && (vm_i1 < pow(vm_i2, 3))) << std::endl;

    int vm_j = 1521;
    std::cout << (((vm_j % 3) == 0) || ((vm_j % 5) == 0)) << std::endl;

    return 0;
}
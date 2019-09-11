#include <iostream>

int main() {

    //Hello User!
    std::string userName;
    std::cout << "Please enter your username:" << std::endl;
    std::cin >> userName;
    std::cout << "Hello, " << userName << "!" << std::endl;
    return 0;
}
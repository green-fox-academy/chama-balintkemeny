#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile;
    std::string name;

    try {
        outputFile.open("my-file.txt");
        if(!outputFile.is_open()) {
            throw std::string("Unable to open file!");
        }
        std::cout << "Enter your name please: " << std::endl;
        std::cin >> name;
        outputFile << name;
        outputFile.close();

    } catch (std::string& errorMsg) {
        std::cout << errorMsg << std::endl;
    }

    return 0;
}
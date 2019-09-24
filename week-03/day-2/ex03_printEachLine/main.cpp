#include <iostream>
#include <fstream>
#include <exception>

int main() {
    std::ifstream inputFile;
    std::string textRows;
    //inputFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    //previous line commented out due to issues with getline

    try {
        inputFile.open("my-file.txt");
        if (!inputFile.is_open()) {
            throw std::string("Unable to open file!");
        }
        while (!inputFile.eof()) {
            std::getline(inputFile, textRows);
            std::cout << textRows << std::endl;
        }
    } catch (std::string& errorMsg) {
        std::cout << errorMsg << std::endl;
    }
    return 0;
}
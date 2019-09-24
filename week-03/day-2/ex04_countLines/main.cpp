#include <iostream>
#include <fstream>
#include <exception>

int countLines (std::string fileName) {
    std::ifstream inputFile;
    inputFile.open(fileName);
    std::string fileText;
    int numRows = 0;

    if (!inputFile.is_open()) {
        return 0;
    }

    while (!inputFile.eof()) {
        std::getline(inputFile, fileText);
        numRows++;
    }
    return numRows;
}

int main() {
    std::string fileName = "my-file.txt";
    int numRows = countLines(fileName);
    std::cout << numRows << std::endl;

    return 0;
}
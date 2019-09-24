#include <iostream>
#include <fstream>

bool copyFile (std::string pathIn, std::string pathOut) {
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string line;

    inputFile.open(pathIn);
    outputFile.open(pathOut);

    if (inputFile.is_open() && outputFile.is_open()) {
        while(!inputFile.eof()) {
            std::getline(inputFile, line);
            outputFile << line << std::endl;
        }
        inputFile.close();
        outputFile.close();
        return  true;
    } else {
        return false;
    }
}

int main() {
    std::string pathIn = "input.txt";
    std::string pathOut = "output.txt";
    bool ifSuccess = copyFile(pathIn, pathOut);
    std::cout << ifSuccess << std::endl;

    return 0;
}
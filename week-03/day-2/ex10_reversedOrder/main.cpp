#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream inputStream;
    std::string textLine;
    std::vector<std::string> vecLines;

    try {
        inputStream.open("input.txt");
        if (!inputStream.is_open()) {
            throw std::string("Unable to open file!");
        }
        while (std::getline(inputStream, textLine)) {
            vecLines.push_back(textLine);
        }
        if (vecLines.empty()) {
            throw std::string("The file contains 0 rows");
        }
        for (unsigned int i = 0; i < vecLines.size(); ++i) {
            std::cout << vecLines[vecLines.size() - (i + 1)] << std::endl;
        }
        inputStream.close();
    } catch (std::string& errorMsg) {
        std::cout << errorMsg << std::endl;
    }
    return 0;
}
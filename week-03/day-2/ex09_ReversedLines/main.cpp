#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputStream;
    std::string textLine;

    try {
        inputStream.open("input.txt");
        if (!inputStream.is_open()) {
            throw std::string("Unable to open file!");
        }
        while (std::getline(inputStream, textLine)) {
            int numChars = textLine.length();
            for (int i = 0; i < numChars; ++i) {
                std::cout << textLine[numChars - (i + 1)];
            }
            std::cout << std::endl;
        }
        inputStream.close();
    } catch (std::string& errorMsg) {
        std::cout << errorMsg << std::endl;
    }
    return 0;
}
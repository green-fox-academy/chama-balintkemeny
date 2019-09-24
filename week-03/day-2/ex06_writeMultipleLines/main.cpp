#include <iostream>
#include <fstream>

void writeMultipleLines (std::string path, std::string word, int wCount) {
    std::ofstream outputFile;
    outputFile.open(path);
    if (!outputFile.is_open()) {
        throw std::string("Unable to create file!");
    }
    for (int i = 0; i < wCount; ++i) {
        outputFile << word << std::endl;
    }
}

int main() {
    std::string path = "my-file.txt";
    std::string word = "apple";
    int wCount = 5;

    try {
        writeMultipleLines(path, word, wCount);
    } catch (std::string& errorMsg) {
        std::cout << errorMsg << std::endl;
    }
    return 0;
}
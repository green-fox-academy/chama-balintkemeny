#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::vector<std::string> getIP (std::string path) {
    std::ifstream inputStream;
    inputStream.open (path);
    std::string line;
    std::vector<std::string> varIP;

    if (!inputStream.is_open()) {
        throw std::string ("Unable to open log file!");
    }
    while (std::getline(inputStream, line)) {
        std::istringstream strStream(line);

    }
    inputStream.close();
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
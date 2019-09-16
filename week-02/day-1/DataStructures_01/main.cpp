#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names;
    std::cout << names.size() << std::endl;

    names.push_back("William");
    std::cout << names.empty() << std::endl;

    names.push_back("John");
    names.push_back("Amanda");
    std::cout << names.size() << std::endl;
    std::cout << names[2] << std::endl;

    for (int i = 0; i < names.size(); ++i) {
        std::cout << i + 1 << ". " << names[i] << std::endl;
    }

    names.erase(names.begin() + 1);

    for (int i = names.size() - 1; i >= 0; --i) {
        std::cout << names[i] << std::endl;
    }

    names.clear();
    std::cout << names.empty() << std::endl;

    return 0;
}
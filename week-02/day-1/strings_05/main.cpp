#include <iostream>

std::string reverse(std::string a);

int main() {
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    std::cout << reverse(reversed) << std::endl;
    return 0;
}

std::string reverse(std::string a) {
    std::string b = a;
    for (int i = 0; i < a.length(); ++i) {
        a[i] = b[a.length() - (i + 1)];
    }
    return a;
}
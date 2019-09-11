#include <iostream>

int main() {

    //Conditional variable mutation (a bit boring...)

    double a = 24;
    int out = 0;

    if ((int)a % 2 == 0) {
        out++;
    }
    std::cout << out << std::endl;

    int b = 13;
    std::string out2 = "";

    if (b < 10) {
        out2 = "Less!";
    } else if (b > 20) {
        out2 = "More!";
    } else {
        out2 = "Sweet!";
    }
    std::cout << out2 << std::endl;

    int c = 123;
    int credits = 100;
    bool isBonus = false;

    if (isBonus == false) {
        if (credits < 50) {
            c--;
        } else {
            c -= 2;
        }
    }
    std::cout << c << std::endl;

    int d = 8;
    int time = 120;
    std::string out3 = "";

    if (time > 200) {
        out3 = "Time out";
    } else if (d % 4 == 0) {
        out3 = "check";
    } else {
        out3 = "Run Forest Run!";
    }
    std::cout << out3 << std::endl;

    return 0;
}
#include <iostream>

int main() {

    float temperature = 21.3;
    float *ptrToTemperature = &temperature;

    *ptrToTemperature = 15.6;

    std::cout << temperature << std::endl;
    return 0;
}
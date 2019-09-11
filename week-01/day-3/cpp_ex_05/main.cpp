#include <iostream>

int main() {

    //Seconds in a day exercise
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int remainingSeconds;

    remainingSeconds = (23 - currentHours) * 3600 + (59 - currentMinutes) * 60 + (59 - currentSeconds) + 1;
    std::cout << remainingSeconds << std::endl;

    return 0;
}
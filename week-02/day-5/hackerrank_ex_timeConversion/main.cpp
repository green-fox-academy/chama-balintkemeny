//#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <string>

std::string timeConversion(std::string timeIn) {
    std::string hours = timeIn.substr(0, 2);
    std::string misc = timeIn.substr(2, 6);
    std::string hoursOut;

    if (hours == "12") {
        if (timeIn.substr(8, 2) == "AM") {
            hoursOut = "00";
        } else {
            hoursOut = hours;
        }
    } else if (timeIn.substr(8, 2) == "AM") {
        hoursOut = hours;
    } else {
        int hoursCount = std::stoi(hours);
        hoursCount += 12;
        hoursOut = std::to_string(hoursCount);
    }
    std::string output = hoursOut + misc;
    return output;
}

int main() {
    std::string timeA = "11:20:35PM";
    std::string timeB = timeConversion(timeA);
    std::cout << timeB << std::endl;
    return 0;
}

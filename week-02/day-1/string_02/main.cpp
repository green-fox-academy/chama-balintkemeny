#include <iostream>

int main() {

    std::string url = "https//www.reddit.com/r/nevertellmethebots";
    url.replace(38, 4, "odds");
    url.insert(5, 1, ':');

    std::cout << url << std::endl;

    return 0;
}
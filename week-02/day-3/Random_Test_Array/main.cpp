#include <iostream>
#include <cstdlib>
#include <ctime>

int starPos[10][2];
int *ptrStarPos = &starPos[0][0];
bool fill = false;

void fillStarPos () {
    srand (time(NULL));
    for (int i = 0; i < 10; ++i) {
        *(ptrStarPos + 2 * i) = rand() % 636;
        *(ptrStarPos + 2 * i + 1) = rand() % 236;
    }
    fill = true;
}

int main() {
    if (!fill) {
        fillStarPos();
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (j == 0) {
                std::cout << starPos[i][j] << ", ";
            } else {
                std::cout << starPos[i][j];
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
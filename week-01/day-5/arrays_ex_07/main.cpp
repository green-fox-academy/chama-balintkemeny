#include <iostream>

int main() {

    int matrixSize;

    std::cout << "How many lines do you want in your matrix?" << std::endl;
    std::cin >> matrixSize;

    int matrix[matrixSize][matrixSize];

    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
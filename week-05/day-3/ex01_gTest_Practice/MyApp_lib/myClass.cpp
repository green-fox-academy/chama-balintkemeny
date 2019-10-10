//
// Created by balintkemeny on 2019. 10. 09..
//

#include "myClass.h"

std::string getApple() {
    return "apple";
}

std::vector<std::vector<int>> invertMatrixAlongShittyDiagonal(std::vector<std::vector<int>> inputMatrix) {
    bool isSquare = true;
    for (std::vector<int> v : inputMatrix) {
        if (v.size() != inputMatrix.size()) {
            isSquare = false;
        }
    }

    try {
        if (!isSquare) {
            throw std::string ("Error: Matrix is not a square!");

        }

        std::vector<std::vector<int>> outputMatrix(inputMatrix.size(), std::vector<int>(inputMatrix.size(), 0));

        for (int row = 0; row < inputMatrix.size(); ++row) {
            for (int col = 0; col < inputMatrix[row].size(); ++col) {
                outputMatrix[(inputMatrix[row].size() - 1) - col][(inputMatrix.size() - 1) - row] = inputMatrix[row][col];
            }
        }

        return outputMatrix;

    } catch (std::string errorMsg) {
        std::cout << errorMsg << std::endl;
        throw errorMsg;
    }


}
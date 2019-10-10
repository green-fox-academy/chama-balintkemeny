#include <iostream>
#include "myClass.h"

int main() {

    std::vector<std::vector<int>> in = {{1,2,3},
                                        {4,5,6},
                                        {7,8,9}};

    std::vector<std::vector<int>> out = {{9,6,3},
                                         {8,5,2},
                                         {7,4,1}};
    /*
    std::vector<std::vector<int>> out2;
    out2 = invertMatrixAlongShittyDiagonal(in);
     */

    std::cout << in[1][0] << std::endl;
    return 0;
}
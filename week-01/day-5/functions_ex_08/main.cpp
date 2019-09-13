#include <iostream>

int unique (int array[], int tempResult[], int size);

int main() {

    /* MISI kód
    std::string str = "zoldroka";
    int size = str.size();

    int i=0;
    for(; i<size; i++){
        if(str[i] == 'd') break;
    }


    if(i == size) std::cout << "nem szerepel";
    else std::cout << "szerepel";
    */

    int array[10] = {1, 2, 5, 4, 6, 2, 5, 4, 9, 2};
    int size = 10;
    int tempResult[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int newSize;

    newSize = unique(array, tempResult, size);

    for (int i = 0; i < newSize; ++i) {
        std::cout << tempResult[i] << std::endl;
    }

    return 0;
}

int unique (int array[], int tempResult[], int size) {
    int k = 0;
    //int tempResult[size];
    for (int i = 0; i < size; ++i) {
        int j;
        for (j = 0; j < i; ++j) {
            if (array[i] == array[j]) break;
            }
        if (i == j) {
            tempResult[k] = array[i];
            k++;
        }
    }

    return k;
    /* int finalResult[k];
    for (int l = 0; l < k; ++l) {
        finalResult[l] = tempResult[l];
    } */
}
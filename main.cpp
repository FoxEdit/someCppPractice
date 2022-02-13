#include <iostream>
#include <numeric>

#include "functions.h"

int main() {
    using std::cout, std::endl;

    const int LEN_ONE = 3;
    double arrayOne[LEN_ONE] = {1.4, 2.8, 3.1};

    showArray(arrayOne, LEN_ONE);

    // --------------------------------

    const int LEN_TWO = 4;
    int arrayTwo[LEN_TWO];

    for (int i = 0; i < LEN_TWO; ++i) {
        arrayTwo[i] = rand() % 2;
    }

    mirrorArray(arrayTwo, LEN_TWO);

    // --------------------------------

    const int LEN_THREE = 8;
    int arrayThree[LEN_THREE];

    inThree(arrayThree, LEN_THREE);

    cout << "\n------------\n";

    for (int i = 0; i < LEN_THREE; ++i) {
        cout << arrayThree[i] << " ";
    }

    // --------------------------------

    const int LEN_FOUR = 10;
    int arrayFour[LEN_FOUR] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    setArrayOffset(arrayFour, 1, LEN_FOUR);

    cout << "\n------------\n";
    for (int i = 0; i < LEN_FOUR; ++i) {
        cout << arrayFour[i] << " ";
    }

    // --------------------------------

    const int LEN_FIVE = 5;
    int arrayFive[LEN_FIVE] = {10, 1, 2, 3, 4};

    cout << "\n------------\n";
    cout << checkBalance(arrayFive, LEN_FIVE);

    return 0;
}
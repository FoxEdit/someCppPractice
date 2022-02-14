//
// Created by FoxEdit on 10.02.2022.
//

#include "functions.h"



void showArray(const double* arr, const size_t len) {
    for (size_t i = 0; i < len; ++i) std::cout << arr[i] << " ";
}

void mirrorArray(int* arr, const size_t len) {
    for (size_t i = 0; i < len; ++i) arr[i] = arr[i] == 1 ? 0 : 1;
}

void inThree(int* arr, const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        if (i == 0) {
            arr[i] = 1;
            continue;
        }

        arr[i] = arr[i - 1] + 3;
    }
}

void setArrayOffset(int* arr, int offset, int len) {
    if (offset < 0) {
        offset = -offset;

        for (int i = 0; i < offset; ++i) {
            int temp = arr[0];

            for (int j = 1; j < len; ++j) arr[j - 1] = arr[j];

            arr[len - 1] = temp;
        }
    } else {
        for (int i = 0; i < offset; i++) {
            int temp = arr[len - 1];

            for (int k = len - 2; k >= 0; k--) arr[k + 1] = arr[k];

            arr[0] = temp;
        }
    }
}

bool checkBalance(const int* arr, const size_t len) {
    int firstPartOfArray;
    int secondPartOfArray;

    for (size_t i = 0; i < len; ++i) {
        firstPartOfArray = std::accumulate(arr, arr + (i + 1), 0);
        secondPartOfArray = std::accumulate(arr + (i + 1), arr + len, 0);

        if (firstPartOfArray == secondPartOfArray) {
            return true;
        }
    }

    return false;
}
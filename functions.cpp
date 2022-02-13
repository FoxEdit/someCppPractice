//
// Created by FoxEdit on 10.02.2022.
//

#include "functions.h"

#include <iostream>
#include <numeric>

void showArray(const double* arr, int len) {
    for (size_t i = 0; i < len; ++i) std::cout << arr[i] << " ";
}

void mirrorArray(int* arr, int len) {
    for (size_t i = 0; i < len; ++i) arr[i] = arr[i] == 1 ? 0 : 1;
}

void inThree(int* arr, int len) {
    for (size_t i = 0; i < len; ++i) {
        if (i == 0) {
            arr[i] = 1;
            continue;
        }

        arr[i] = arr[i - 1] + 3;
    }
}

// https://vk.cc/caZQ1K
void setArrayOffset(int* arr, int offset, int len) {
    if (offset > 0) {
        for (size_t i = 0; i < len; ++i) arr[i] = (i + offset) % len;
    } else if (offset < 0) {
        while (offset < 0) offset += len;
        for (size_t i = 0; i < len; ++i) arr[i] = (i + offset) % len;
    }
}

bool checkBalance(const int* arr, int len) {
    int firstPartOfArray;
    int secondPartOfArray;

    for (int i = 0; i < len; ++i) {
        firstPartOfArray = std::accumulate(arr, arr + (i + 1), 0);
        secondPartOfArray = std::accumulate(arr + (i + 1), arr + len, 0);

        if (firstPartOfArray == secondPartOfArray) {
            return true;
        }
    }

    return false;
}
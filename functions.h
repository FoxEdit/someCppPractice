//
// Created by FoxEdit on 10.02.2022.
//

#ifndef GBCLASS_FUNCTIONS_H
#define GBCLASS_FUNCTIONS_H

#include <iostream>
#include <algorithm>
#include <numeric>
void showArray(const double* arr, size_t len);
void mirrorArray(int* arr, size_t len);
void inThree(int* arr, size_t len);
void setArrayOffset(int* arr, int offset, int len);
bool checkBalance(const int* arr, size_t len);

#endif  // GBCLASS_FUNCTIONS_H
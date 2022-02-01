#include <iostream>
#include <locale>
#include "Header.h"

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int rowA, colA, rowB, colB;
    rowA = size();
    colA = size();
    int** A = new int*[colA];
    for (int i = 0; i < colA; i++) {
        A[i] = new int[rowA];
    }
    rowB = size();
    colB = size();
    int** B = new int* [colB];
    for (int i = 0; i < colB; i++) {
        B[i] = new int[rowB];
    }
    int **C = new int*
}


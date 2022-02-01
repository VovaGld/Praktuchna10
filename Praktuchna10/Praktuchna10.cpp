#include <iostream>
#include <locale>
#include "Header.h"

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int rowA, colA, rowB, colB, colC, rowC;
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
    if (colA >= colB)
        colC = colA;
    else
        colC = colB;
    if (rowA >= rowB)
        rowC = rowA;
    else
        rowC = rowB;
    int** C = new int* [colC];
    for (int i = 0; i < colC; i++) {
        C[i] = new int[rowC];
    }
}


#include <iostream>
#include <locale>
#include "Header.h"

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int rowA, colA, rowB, colB, colSum, rowSum, colMulti, rowMulti;

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
        colSum = colA;
    else
        colSum = colB;
    if (rowA >= rowB)
        rowSum = rowA;
    else
        rowSum = rowB;
    int** Sum = new int* [colSum];
    for (int i = 0; i < colSum; i++) {
        Sum[i] = new int[rowSum];
    }

    if (colA == rowB) {
        colMulti = rowA;
        rowMulti = colB;
        int** Multi = new int* [colMulti];
        for (int i = 0; i < colMulti; i++) {
            Sum[i] = new int[rowMulti];
        }
    }
    else
        printf("Множення не можливе");
   
    printf("Введіть значення матриці A: \n");
    InputA(A, rowA, colA);
    printf("Введіть значення матриці B: \n");
    InputB(B, rowB, colB);
    printf("Матриця А: \n");
    PrintA(A, rowA, colA);
    printf("Матриця B: \n");
    PrintB(B, rowB, colB);
    
    
//ВАЛОДЯ ХАРОШИЙ 1
}


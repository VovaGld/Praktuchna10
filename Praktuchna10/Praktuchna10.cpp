#include <iostream>
#include <locale>
#include "Header.h"

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int rowA, colA, rowB, colB, colSum, rowSum, colMulti, rowMulti;

    rowA = size();
    colA = size();
    int** A = new int*[rowA];
    for (int i = 0; i < rowA; i++) {
        A[i] = new int[colA];
    }
    printf("Введіть значення матриці A: \n");
    InputA(A, rowA, colA);

    rowB = size();
    colB = size();
    int** B = new int* [rowB];
    for (int i = 0; i < rowB; i++) {
        B[i] = new int[colB];
    }
    printf("Введіть значення матриці B: \n");
    InputB(B, rowB, colB);

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
    printf("Матриця А: \n");
    PrintA(A, rowA, colA);
    printf("Матриця B: \n");
    PrintB(B, rowB, colB);
    printf("Матриця Sum: \n");
    SumMas(A, B, Sum, rowSum, colSum,colA,rowA,colB,rowB);
    PrintSum(Sum, rowSum, colSum);

    if (colA == rowB) {
        colMulti = rowA;
        rowMulti = colB;
        int** Multi = new int* [colMulti];
        for (int i = 0; i < colMulti; i++) {
            Multi[i] = new int[rowMulti];
        }
        printf("Матриця Multi: \n");
        MultiMas(A, B, Multi, rowMulti, colMulti, colA, rowA, colB, rowB);
        PrintMulti(Multi, rowMulti, colMulti);
    }
    else
        printf("Множення не можливе");

}


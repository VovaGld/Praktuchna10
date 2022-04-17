#include <iostream>
#include <locale>
#include "Header.h"

int main()
{
    setlocale(LC_CTYPE, "ukr");

    int rowA, colA, rowB, colB, colSum, rowSum, colMulti, rowMulti, rowA2, colA2, rowB2, colB2;

    printf("|---------------------------------------|\n");
    printf("|           Додавання матриць           |\n");
    printf("|---------------------------------------|\n");

    printf("Введіть к-сть рядків матриці А: ");
    rowA = size();
    printf("Введіть к-сть стовбців матриці А: ");
    colA = size();
    int** A = new int*[rowA];
    for (int i = 0; i < rowA; i++) {
        A[i] = new int[colA];
    }
    printf("Введіть значення матриці A: \n");
    InputA(A, rowA, colA);

    printf("Введіть к-сть рядків матриці В: ");
    rowB = size();
    printf("Введіть к-сть стовбців матриці В: ");
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
    int** Sum = new int* [rowSum];
    for (int i = 0; i < rowSum; i++) {
        Sum[i] = new int[colSum];
    }

    printf("Матриця А: \n");
    PrintMas(A, rowA, colA);
    printf("Матриця B: \n");
    PrintMas(B, rowB, colB);
    printf("Результат додавання матриць:: \n");
    SumMas(A, B, Sum, rowSum, colSum,colA,rowA,colB,rowB);
    PrintMas(Sum, rowSum, colSum);

    printf("|---------------------------------------|\n");
    printf("|            Множення матриць           |\n");
    printf("|---------------------------------------|\n");

    printf("Введіть к-сть рядків матриці А: ");
    rowA2 = size();
    printf("Введіть к-сть стовбців матриці А: ");
    colA2 = size();
    int** A2 = new int* [rowA2];
    for (int i = 0; i < rowA2; i++) {
        A2[i] = new int[colA2];
    }
    printf("Введіть значення матриці A: \n");
    InputA2(A2, rowA2, colA2);

    printf("Введіть к-сть рядків матриці В: ");
    rowB2 = size();
    printf("Введіть к-сть стовбців матриці В: ");
    colB2 = size();
    int** B2 = new int* [rowB2];
    for (int i = 0; i < rowB2; i++) {
        B2[i] = new int[colB2];
    }
    printf("Введіть значення матриці B: \n");
    InputB2(B2, rowB2, colB2);

    printf("Матриця А: \n");
    PrintMas(A2, rowA2, colA2);
    printf("Матриця B: \n");
    PrintMas(B2, rowB2, colB2);

    if (colA2 == rowB2) {
        colMulti = rowA2;
        rowMulti = colB2;
        int** Multi = new int* [rowMulti];
        for (int i = 0; i < rowMulti; i++) {
            Multi[i] = new int[colMulti];
        }
        printf("Результат множення матриць: \n");
        MultiMas(A2, B2, Multi, rowMulti, colMulti, colA2);
        PrintMas(Multi, rowMulti, colMulti);
    }
    else
        printf("Множення не можливе");

}


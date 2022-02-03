#include <iostream>

void SumMas(int** A, int** B, int** Sum, int rowSum, int colSum,int colA,int rowA,int colB,int rowB) {
	int a, b;
	for (int i = 0; i < rowSum; i++) {
		for (int j = 0; j < colSum; j++) {
			if (i < rowA && j < colA)
				a = A[i][j];
			else
				a = 0;
			if (i < rowB && j < colB)
				b = B[i][j];
			else
				b = 0;
			Sum[i][j] = a+b;
		}
	}
}  
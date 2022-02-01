#include <iostream>

void SumMas(int** A, int** B, int** C, int rowC, int colC) {
	for (int i = 0; i < rowC; i++) {
		for (int j = 0; j < colC; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}
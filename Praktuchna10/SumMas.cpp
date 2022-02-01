#include <iostream>

void SumMas(int** A, int** B, int** Sum, int rowSum, int colSum) {
	for (int i = 0; i < rowSum; i++) {
		for (int j = 0; j < colSum; j++) {
			Sum[i][j] = A[i][j] + B[i][j];
		}
	}
}
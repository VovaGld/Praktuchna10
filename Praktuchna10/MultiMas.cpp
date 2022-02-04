#include <iostream>

void MultiMas(int** A, int** B, int** Multi, int rowMulti, int colMulti, int colA, int rowA, int colB, int rowB) {
	int cola = colA, rowa = 0, colb = 0, rowb = rowB, n = 0, k = 0, M = 0;
	for (int i = 0; i < rowMulti; i++) {
		for (int j = 0; j < colMulti; j++) {
			Multi[i][j] = 0;
			for (int c = 0; c < colA;c++) {
				Multi[i][j] += A[i][c] * B[c][j];
			}
		}
	}
}
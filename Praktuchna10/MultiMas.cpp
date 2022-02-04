#include <iostream>

void MultiMas(int** A2, int** B2, int** Multi, int rowMulti, int colMulti, int colA2, int rowA2, int colB2, int rowB2) {
	for (int i = 0; i < rowMulti; i++) {
		for (int j = 0; j < colMulti; j++) {
			Multi[i][j] = 0;
			for (int c = 0; c < colA2;c++) {
				Multi[i][j] += A2[i][c] * B2[c][j];
			}
		}
	}
}
#include <iostream>
void PrintB(int** B, int rowB, int colB) {
	for (int i = 0; i < colB; i++) {
		for (int k = 0; k < rowB; k++) {
			printf("%6d", B[i][k]);
		}
		printf("\n");
	}
}
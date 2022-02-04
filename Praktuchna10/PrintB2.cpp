#include <iostream>
void PrintB2(int** B2, int rowB2, int colB2) {
	for (int i = 0; i < rowB2; i++) {
		for (int k = 0; k < colB2; k++) {
			printf("%6d", B2[i][k]);
		}
		printf("\n");
	}
}
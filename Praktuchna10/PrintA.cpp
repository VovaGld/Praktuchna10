#include <iostream>
void PrintA(int** A, int rowA, int colA) {
	for (int i = 0; i < colA; i++) {
		for (int k = 0; k < rowA; k++) {
			printf("%6d", A[i][k]);
		}
		printf("\n");
	}
}
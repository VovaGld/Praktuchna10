#include <iostream>
void InputA(int** A, int rowA, int colA) {
	for (int i = 0; i < rowA; i++) {
		for (int k = 0; k < colA; k++) {
			printf("A[%d][%d] = ", i, k);
			scanf_s("%d", &A[i][k]);
		}
	}
}
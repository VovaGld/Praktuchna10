#include <iostream>
void InputA(int** A, int colA, int rowA) {
	for (int i = 0; i < colA; i++) {
		for (int k = 0; k < rowA; k++) {
			printf("A[%d][%d] = ", i, k);
			scanf_s("%d", &A[i][k]);
		}
	}
}
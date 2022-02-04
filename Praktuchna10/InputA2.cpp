#include <iostream>
void InputA2(int** A2, int rowA2, int colA2) {
	for (int i = 0; i < rowA2; i++) {
		for (int k = 0; k < colA2; k++) {
			printf("A2[%d][%d] = ", i, k);
			scanf_s("%d", &A2[i][k]);
		}
	}
}
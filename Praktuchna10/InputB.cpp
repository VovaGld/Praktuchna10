
#include <iostream>
void InputB(int** B, int rowB, int colB) {
	for (int i = 0; i < rowB; i++) {
		for (int k = 0; k < colB; k++) {
			printf("B[%d][%d] = ", i, k);
			scanf_s("%d", &B[i][k]);
		}
	}
}
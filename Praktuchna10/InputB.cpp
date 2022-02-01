
#include <iostream>
void InputB(int** B, int colB, int rowB) {
	for (int i = 0; i < colB; i++) {
		for (int k = 0; k < rowB; k++) {
			printf("B[%d][%d] = ", i, k);
			scanf_s("%d", &B[i][k]);
		}
	}
}
#include <iostream>
void PrintA2(int** A2, int rowA2, int colA2) {
	for (int i = 0; i < rowA2; i++) {
		for (int k = 0; k < colA2; k++) {
			printf("%6d", A2[i][k]);
		}
		printf("\n");
	}
}
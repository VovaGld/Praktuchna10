#include <iostream>
void PrintSum(int** Sum, int rowSum, int colSum) {
	for (int i = 0; i < rowSum; i++) {
		for (int k = 0; k < colSum; k++) {
			printf("%6d", Sum[i][k]);
		}
		printf("\n");
	}
}
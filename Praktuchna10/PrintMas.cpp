#include <iostream>
void PrintB2(int** Mas, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int k = 0; k < col; k++) {
			printf("%6d", Mas[i][k]);
		}
		printf("\n");
	}
}
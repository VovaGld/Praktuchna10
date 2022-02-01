#include <iostream>
void PrintMulti(int** Multi, int rowMulti, int colMulti) {
	for (int i = 0; i < colMulti; i++) {
		for (int k = 0; k < rowMulti; k++) {
			printf("%6d", Multi[i][k]);
		}
		printf("\n");
	}
}
#include <stdio.h>

int main(void) {
	int matrix[2][3];
	// int row, col

	for (int row = 0; row < 2; row++) {
		
		for (int col = 0; col < 3; col++) {
			scanf_s(" %d", &matrix[row][col]);
		}
	}

	for (int row = 0; row < 2; row++) {

		for (int col = 0; col < 3; col++) {
			printf(" %d", matrix[row][col]);
		}
		
		printf("\n");

	}

	return 0;
}
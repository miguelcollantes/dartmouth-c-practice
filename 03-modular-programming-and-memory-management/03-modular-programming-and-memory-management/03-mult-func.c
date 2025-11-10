#include <stdio.h>

void printCol(int numCol, char pattern);
void printTri(int numRow, char pattern);
void printRect(int numRow, int numCol, char pattern);

int main(void) {
	int numCol = 0;
	int numRow = 0;

	printf("How many columns do you want? ");
	scanf_s(" %d", &numCol);
	printf("How mand rows do you want? ");
	scanf_s(" %d", &numRow);

	printCol(numCol, 'X');
	printTri(numRow, '*');
	printRect(numRow, numCol, '#');

	return 0;
}

void printCol(int numCol, char pattern) {
	// print num columns
	for (int i = 0; i < numCol; i++) {
		printf("%c", pattern);
	}

	printf("\n");
}

void printTri(int numRow, char pattern) {
	// print num lines in triangle
	for (int i = 0; i < numRow; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("%c", pattern);
		}

		printf("\n");
	}
}

void printRect(int numRow, int numCol, char pattern) {
	for (int i = 0; i < numRow; i++) {
		for (int j = 0; j < numCol; j++) {
			printf("%c", pattern);
		}

		printf("\n");
	}
}

#include <stdio.h>

void printArray(int*, int);
void squareArray(int*, int);

int main(void) {
	int array[] = { 0,1,2,3,4,5 };
	int arraySize = sizeof(array) / sizeof(array[0]);

	printArray(array, arraySize);
	squareArray(array, arraySize);

	return 0;
}

void printArray(int* p_array, int size) {

	printf("Array contains:\n");

	for (int i = 0; i < size; i++) {
		// printf("%d\n", *(p_array + i));
		printf("%d\n", p_array[i]); // does the same as above since p_array == array; lets us use array notation
	}

	printf("\n");
}

void squareArray(int* p_array, int size) {

	for (int i = 0; i < size; i++) {

		printf("squaring %d...\n", p_array[i]);
		// p_array[i] *= p_array[i];
		*(p_array + i) *= *(p_array + i); // same as above
		printf("new value at index %d is %d\n", i, p_array[i]);
	}

	printf("\n");
}
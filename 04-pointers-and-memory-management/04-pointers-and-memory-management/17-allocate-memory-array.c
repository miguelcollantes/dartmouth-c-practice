#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* array;

	array = (int*)malloc(5 * sizeof(int)); // need to preallocate 5 times to store 5 int in array
	array[0] = 3;
	array[1] = 45;
	array[2] = 65;
	*(array + 3) = 99;
	*(array + 4) = 741;


	for (int i = 0; i < 5; i++) {
		printf("%d. %d\n", i + 1, array[i]);
	}

	printf("\nPlease enter 5 integers: \n");

	for (int i = 0; i < 5; i++) {
		scanf_s(" %d", (array + i));
	}

	printf("\nYou entered: \n");
	
	for (int i = 0; i < 5; i++) {
		printf("%d. %d\n", i + 1, *(array + i));
	}

	free(array); // free memory space at array

	return 0;
}
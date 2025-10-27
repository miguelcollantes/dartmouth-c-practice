#include <stdio.h>

int main(void) {
	int array[3];
	int inputValue = 0;
	// int indexValue = 0;

	// i would just use 'i' for the indexValue input; for the lesson, i went ahead and included their indexValue as an alternative
	for (int i = 0; i < 3; i++) {
		printf("Enter a value:");
		scanf_s(" %d", &inputValue);
		array[/*indexValue*/ i] = inputValue;
		printf("index %d hold the element: %d\n", /*indexValue*/ i, array[/*indexValue*/ i]);
		// indexValue++;
	}



	return 0;
}
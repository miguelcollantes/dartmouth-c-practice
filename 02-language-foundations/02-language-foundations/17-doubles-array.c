#include <stdio.h>

int main(void) {
	double array[3];
	double inputValue = 0.0;

	for (int i = 0; i < 3; i++) {
		printf("Enter a decimal value: \n");
		scanf_s(" %lf", &inputValue);
		array[i] = inputValue;
		printf("Index %d contains: %lf\n", i, array[i]);
	}

	return 0;
}
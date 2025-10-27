#include <stdio.h>

int main(void) {
	int array[3]; // creates space to hold 3 integers

	// index positions start at 0; so for size three: [0], [1], [2] index positions
	array[0] = 18;
	array[1] = 137;
	array[2] = 8;

	printf("First element is: %d\n", array[0]);
	printf("Second element is: %d\n", array[1]);
	printf("Third element is: %d\n", array[2]);

	return 0;
}
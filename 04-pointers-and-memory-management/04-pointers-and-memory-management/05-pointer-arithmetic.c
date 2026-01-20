#include <stdio.h>

int main(void) {
	int array[] = { 6, 2, -4, 8, 5, 1 };
	int arraySize = sizeof(array) / sizeof(array[0]);

	printf("Array contains:\n");

	for (int i = 0; i < arraySize; i++) {
		printf("%d at address %p\n", array[i], &array[i]);
	}

	// array equals &array[0]
	printf("\narray is:                %p\n", array); // array itself holds beginning address, not a variable

	// demonstrating equivalency
	int* p_array;
	int* p_array2;

	p_array = array;
	p_array2 = &array[0];

	printf("p_array address equals:  %p\n", p_array);
	printf("p_array2 address equals: %p\n\n", p_array2);

	*p_array = 10;

	printf("p_array now equals: %d at address %p\n\n", *p_array, p_array);

	// pointer arithmetic
	*(p_array + 2) = 22; // automatically adjusts based on variable size
	*(p_array + 3) = 33;
	*(array + 4) = 44; // equivalent as above
	p_array++; // increments entire array stack reference
	*p_array = 11;
	p_array--;

	printf("Displaying contents of array using pointer arithemtic:\n");

	for (int i = 0; i < arraySize; i++) {
		printf("%d\n", *(p_array + i));
	}

	return 0;
}
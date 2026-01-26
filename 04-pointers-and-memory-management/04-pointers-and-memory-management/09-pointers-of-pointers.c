#include <stdio.h>

void setToZero(short**);
void printArray(short*, int);

int main(void) {
	short a[] = { 1245, 1924, 234 };
	short b[] = { 24, 256 };
	short sizeA = sizeof(a) / sizeof(a[0]);
	short sizeB = sizeof(b) / sizeof(b[0]);
	short* multiArray[] = { a, b };

	printf("array a contains:\n");
	printArray(a, sizeA);

	printf("\narray b contains:\n");
	printArray(b, sizeB);

	printf("\na is at address: %p\n", a);
	printf("b is at address: %p\n", b);

	setToZero(multiArray);

	printf("array a now contains:\n");
	printArray(a, sizeA);

	printf("\narray b now contains:\n");
	printArray(b, sizeB);

	return 0;
}

void setToZero(short** x) {
	/*
	*x does not fully dereference since x[0] equals an array, which is
	still an address; requires double dereference to access first
	variable, therefore must *(*x)
	*/
	printf("\ndereferencing multiArray once (*x), yields address of first stored array: %p\n", *x);
	printf("dereferencing multiArray twice *(*x), accesses value stored inside first array: %d\n\n", *(*x));

	printf("zeroing out a and b...\n\n");
	// setting array a to 0
	*(*x) = 0; // x[0][0] OR *(x[0] + 0)
	*((*x) + 1) = 0; // x[0][1] OR *(x[0] + 1)
	*((*x) + 2) = 0; // x[0][2] OR *(x[0] + 2)

	// setting array b to 0
	*(*(x + 1)) = 0; // x[1][0] OR *(x[1] + 0)
	*(*(x + 1) + 1) = 0; // x[1][1] OR *(x[1] + 1)
}

void printArray(short* array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", array[i]);
	}
}
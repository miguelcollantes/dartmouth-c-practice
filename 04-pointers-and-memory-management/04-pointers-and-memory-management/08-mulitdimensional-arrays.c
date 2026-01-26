#include <stdio.h>

int main(void) {
	short a[] = { 1, 2, 3 };
	short b[] = { 10, 20 };
	short c[] = { 100, 200, 300, 400 };
	short sizeA = sizeof(a) / sizeof(a[0]);
	short sizeB = sizeof(b) / sizeof(b[0]);
	short sizeC = sizeof(c) / sizeof(c[0]);

	short* multiArray[3] = { a, b, c };

	printf("short a contains:\n");

	for (int i = 0; i < sizeA; i++) {
		printf("%d\n", a[i]);
	}

	// accessing multidimensional arrays using dereferencing
	*multiArray[0] = 5;
	*(multiArray[0] + 1) = 10;
	*(multiArray[0] + 2) = 15;

	printf("\nshort a now contains:\n");

	for (int i = 0; i < sizeA; i++) {
		printf("%d\n", a[i]);
	}

	printf("\nshort b contains:\n");

	for (int i = 0; i < sizeB; i++) {
		printf("%d\n", b[i]);
	}

	*multiArray[1] = 12;
	*(multiArray[1] + 1) = 24;

	printf("\nshort b now contains:\n");

	for (int i = 0; i < sizeB; i++) {
		printf("%d\n", b[i]);
	}

	// accessing multidimensional arrays using double bracket method
	printf("\nshort c contains:\n");

	for (int i = 0; i < sizeC; i++) {
		printf("%d\n", c[i]);
	}

	multiArray[2][0] = 3;
	multiArray[2][1] = 7;
	multiArray[2][2] = 16;
	multiArray[2][3] = 59;

	printf("\nshort c now contains:\n");

	for (int i = 0; i < sizeC; i++) {
		printf("%d\n", c[i]);
	}

	return 0;
}
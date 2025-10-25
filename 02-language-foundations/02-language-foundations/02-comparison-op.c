/*
 *  + - * / % : arithmetic operators
 *  < > <= >= != == : comparison operators
*/

#include <stdio.h>

int main(void) {
	int a = 5;
	int b = 2;
	int result;

	printf("a = %d ; b = %d\n", a, b);

	// a == b
	printf("Check: Is a == b?\n");
	result = (a == b);
	printf("result is %d.\n", result);

	if (result) {
		printf("TRUE\n");
	}

	else {
		printf("FALSE\n");
	}

	// a < b
	printf("Check: Is a < b?\n");
	result = (a < b);
	printf("result is %d.\n", result);

	if (result) {
		printf("TRUE\n");
	}

	else {
		printf("FALSE\n");
	}

	// a >= b
	printf("Check: Is a >= b?\n");
	result = (a >= b);
	printf("result is %d.\n", result);

	if (result) {
		printf("TRUE\n");
	}

	else {
		printf("FALSE\n");
	}

	return 0;
}
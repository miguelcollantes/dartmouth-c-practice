#include <stdio.h>

int main(void) {
	// single scanf_s input
	int age = 0;

	printf("What is your age?\n");
	scanf_s("%d", &age);
	printf("You are %d years old!\n", age);


	// multiple scanf_s input
	int first, second, third;

	printf("Please enter three integers:\n");
	scanf_s("%d%d%d", &first, &second, &third);
	printf("You entered %d for the first integer, %d for the second integer, and %d for the third integer!\n", first, second, third);


	// to allow commas, need to include , in the scanf_s statement and prompt user for ,:
	int a, b, c;

	printf("Please enter three integers, separated by commas:\n"); // prompt user
	scanf_s("%d,%d,%d", &a, &b, &c); // include commas in scanf_s
	printf("You entered %d for the first integer, %d for the second integer, and %d for the third integer!\n", a, b, c);
	return 0;
}
#include <stdio.h>

int sum(int num1, int num2) {
	int result;

	printf("Adding two integers . . .\n");
	result = num1 + num2;
	printf("Finished adding two integers!\n");

	return result;
}



int main(void) {
	int a = 0;
	int b = 0;

	printf("Please enter two integers separated by a space: ");
	scanf_s(" %d %d", &a, &b);
	printf("You entered: %d and %d\n", a, b);

	int c = sum(a, b);

	printf("The sum of %d and %d is: %d\n", a, b, c);
	return 0;
}
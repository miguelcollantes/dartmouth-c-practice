/*
Visual Studio will still compile without warnings if a function prototype is not declared, but it is good practice to declare function prototypes to ensure robustness and portability. It becomes a safer practice to always use fucntion prototypes above main function and write function definitions below main function.
*/

#include <stdio.h>

int protoSum(int, int); // function prototype declaration

int main(void) {
	int a = 0;
	int b = 0;

	printf("Please enter two integers separated by a space: ");
	scanf_s(" %d %d", &a, &b);
	printf("You entered: %d and %d\n", a, b);

	int c = protoSum(a, b);

	printf("The sum of %d and %d is: %d\n", a, b, c);

	return 0;
}

int protoSum(int num1, int num2) {
	int sum;

	printf("Adding %d and %d\n", num1, num2);
	sum = num1 + num2;
	printf("Finished adding %d and %d\n", num1, num2);

	return sum;
}
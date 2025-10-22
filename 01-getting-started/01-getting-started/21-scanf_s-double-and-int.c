#include <stdio.h>

int main(void) {
	int age;
	double height;

	// integrating int and double in the final printf statement
	printf("What is your age?\n");
	scanf_s("%d", &age);
	printf("How tall are you (feet)?\n");
	scanf_s("%lf", &height);
	printf("You are %d years old and %.2lf feet tall!\n", age, height);

	// scanf_s both int and double simultaneously
	printf("What is your age AND height? Separate inputs with a space.\n");
	scanf_s("%d %lf", &age, &height);
	printf("You are %d years old and %.2lf feet tall!\n", age, height);

	return 0;
}
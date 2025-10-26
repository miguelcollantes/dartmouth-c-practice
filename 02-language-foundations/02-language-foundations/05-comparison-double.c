#include <stdio.h>

int main(void) {
	// if you go past precision of double (6 decimals), may get incorrect comparison
	double a = 5.0;
	double b = 2.0;
	int result; // result from comparison should always be int

	printf("a is %.1lf ; b is %.1lf\n", a, b);
	printf("check: a == b?\n");
	result = (a == b);
	printf("result is %d\n", result);

	if (result) {
		printf("TRUE\n");
	}

	else {
		printf("FALSE\n");
	}

	// wrong precision example
	double c = 5.0000000000000000001;
	double d = 5.0000000000000000000;

	printf("c is %.1lf ; d is %.1lf\n", c, d);
	printf("check: c == d\n");
	result = (c == d);
	printf("result is %d\n", result);

	if (result) {
		printf("TRUE");
	}

	else {
		printf("FALSE");
	}

	return 0;
}
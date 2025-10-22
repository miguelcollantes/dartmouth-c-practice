/*
%lf prints floating-point numbers to six decimal places by default.

To specify the number of digits after the decimal, use %.nf, where n is the desired precision.

Example: Output to three decimal places
	printf("%.3lf", value); // limits output to three digits after decimal

All %lf and similar formats round the output to the nearest decimal as specified by the precision.
*/

#include <stdio.h>

int main(void) {
	printf("I am %lf feet tall.\n", 5.5);

	double height = 5.65;
	printf("My friend is %.2lf feet tall.\n", height);

	height = 2721.89;
	printf("The Burj Khalifa is %.1lf feet tall.\n", height);

	return 0;
}
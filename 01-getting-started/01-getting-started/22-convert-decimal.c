/*
convert between units by writing a program that reads a decimal number representing a distance in kilometers and that prints out the corresponding distance in miles with 6 decimal places.

You may use the fact that one kilometer equals 0.621371 miles.

Example
Input:
4.8
Output:
2.982581
*/

#include <stdio.h>

int main(void) {
	double kilometer;
	double mile = 0.621371;

	scanf_s("%lf", &kilometer);
	printf("%lf", kilometer * mile);

	return 0;
}
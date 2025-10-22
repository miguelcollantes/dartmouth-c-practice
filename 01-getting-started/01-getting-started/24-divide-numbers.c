/*
Read a decimal number representing a temperature in degrees Celsius and prints out the corresponding temperature in degrees Fahrenheit with 1 decimal place. Here is the conversion formula:

Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0

Examples:

Input:
192
Output:
377.6


Input:
30.5
Output:
86.9
*/

#include <stdio.h>

int main(void) {
	double celcius;
	double fahrenheit;

	scanf_s("%lf", &celcius);
	fahrenheit = celcius * 9.0 / 5.0 + 32.0;
	printf("%.1lf", fahrenheit);

	return 0;
}
#include <stdio.h>

int main(void) {
	// pay 166 dollars with 20-dollar bills, rest with 1-dollar bills
	int twenties = 166 / 20;
	printf("%d 20-dollar bills for a total of %d dollars.\n", twenties, twenties * 20);

	// % is the remainder or modulo function
	int remainder = 166 % 20;
	printf("%d 1-dollar bills for a total of %d dollar.\n", remainder, remainder * 1);
	
	printf("Together, %d 20-dollar bills and %d 1-dollar bills make %d dollars.\n", twenties, remainder, twenties * 20 + remainder * 1);

	return 0;
}
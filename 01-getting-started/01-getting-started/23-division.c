/*
integer division will drop decimals
*/

#include <stdio.h>

int main(void) {
	// integer division
	printf("5 / 2 equals %d\n", 5 / 2); // drops decimal
	
	// floating point division
	printf("5.0 / 2.0 equals %lf\n", 5.0 / 2.0);

	// integer / floating point
	printf("5 / 2.0 equals %lf", 5 / 2.0);

	// floting point / integer
	printf("5.0 / 2 equals %lf", 5.0 / 2);

	return 0;
}
/*
 * Notes:
 *   The 'if' statement evaluates a condition inside parentheses.
 *   If the condition evaluates to a nonzero value (true), the statement or block that follows executes.
 *   If the condition evaluates to zero (false), the statement or block is skipped.
 *   Example:
 *       if (n)       // true if n != 0
 *           doSomething();
 *       if (a == n)  // true only if a and n have equal values
 *           compareValues();
 *
 *   Remember: In C, any nonzero value is considered 'true', and zero is 'false'.
 */
#include <stdio.h>

int main(void) {
	int weather = 0;
	int good = 1;
	int bad = 0;

	// will print because weather holds non-zero value
	weather = good;
	if (weather) {
		printf("weather is good\n");
	}

	// will NOT print because weather holds zero value
	weather = bad;
	if (weather) {
		printf("weather is bad\n");
	}

	// will print if weather holds zero value
	else {
		printf("weather is cloudy\n");
	}

	return 0;
}
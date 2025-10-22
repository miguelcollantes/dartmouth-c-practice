/*
Input
#

Output
++++#++++
+++###+++
++#####++
+#######+
#########

Input
o

Output
++++o++++
+++ooo+++
++ooooo++
+ooooooo+
ooooooooo
*/

#include <stdio.h>

int main(void) {
	char input;
	int totalRows = 5;
	int numInputs = 0;
	int numStatic = 0;

	scanf_s(" %c", &input, 1);

	// determine number of plus signs and char inputs
	for (int row = 0; row < totalRows; row++) {
		numInputs = 2 * row + 1;
		numStatic = 4 - row;

		// print leading plus signs
		for (int a = 0; a < numStatic; a++) {
			printf("+");
		}

		// print input char
		for (int b = 0; b < numInputs; b++) {
			printf("%c", input);
		}

		// print trailing plus signs
		for (int a = 0; a < numStatic; a++) {
			printf("+");
		}
		printf("\n");
	}

	return 0;
}
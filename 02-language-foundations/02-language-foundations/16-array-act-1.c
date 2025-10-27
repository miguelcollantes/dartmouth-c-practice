/*
Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.

Example:

Input:
500 180 650 25 666 42 421 1 370 211
3

Output:
25
*/
#include <stdio.h>

int main(void) {
	int quantArray[10];
	int inputValue;
	// int requestedIndex;

	for (int i = 0; i < 10; i++) {
		scanf_s(" %d", &inputValue);
		quantArray[i] = inputValue;
	}

	scanf_s(" %d", &inputValue);
	printf("%d\n", quantArray[/*requestedIndex*/inputValue]); // learned that i can just reuse inputValue

	return 0;
}
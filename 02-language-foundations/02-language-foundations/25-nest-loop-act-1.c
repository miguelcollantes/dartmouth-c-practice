/*
Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

Examples
Input:
5
Output:
*****
*****
*****
*****
*****

Input:
3
Output:
***
***
***
*/

#include <stdio.h>

int main(void) {
	int numStars = 0;

	scanf_s(" %d", &numStars);

	for (int length = 0; length < numStars; length++) {
		for (int width = 0; width < numStars; width++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
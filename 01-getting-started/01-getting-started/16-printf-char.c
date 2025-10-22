/*
Output: Programming in C ; Programming %c%c %c
*/

#include <stdio.h>

int main(void) {
	// must use ' ' NOT " " when assigning char variable
	char firstLetter = 'i';
	char secondLetter = 'n';
	char thirdLetter = 'C';

	printf("Programming %c%c %c", firstLetter, secondLetter, thirdLetter);
	return 0;
}
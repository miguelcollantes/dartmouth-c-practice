/*
This program demonstrates safe character input using scanf_s with %c.

NOTE: Always put a space before %c in the format string to skip prior whitespace (such as leftover newlines from previous input). This prevents %c from reading unintended whitespace instead of the desired character.

Examples:

1. scanf_s(" %c", ...)  // Reads first non-whitespace character after last input
2. scanf_s(" %c%c", ...) // Reads two consecutive non-whitespace characters (could capture whitespace between if user enters it)
3. scanf_s(" %c %c", ...) // Reads two characters, each skipping whitespace (works well for space-separated input)
4. scanf_s(" %c,%c", ...) // Reads two characters separated by a comma (expects input like 'a,b')
5. scanf_s(" %c, %c", ...) // Reads two characters, each skipping whitespace, separated by a comma
*/

#include <stdio.h>

int main(void) {
	char letter;

	printf("Please enter a letter: ");
	// scanf_s("%c", &letter, [expected number of letters]);
	scanf_s(" %c", &letter, 1); // NOTE: use space before first %c to skip all previous input whitespace
	printf("You entered the letter %c.\n", letter);

	char letter1, letter2;

	printf("Please enter two letters: ");
	// scanf_s("%c%c", &letter1, [expected number of letters], &letter2, [expected number of letters]);
	scanf_s(" %c%c", &letter1, 1, &letter2, 1); // NOTE: Reads two consecutive non-whitespace characters (could capture whitespace between if user enters it)
	printf("You entered letters %c and %c.\n", letter1, letter2);

	printf("Please enter two letters separated by a space: ");
	scanf_s(" %c %c", &letter1, 1, &letter2, 1); // NOTE: space in between %c and %c negates whitespace capture
	printf("You entered letters %c and %c.\n", letter1, letter2);

	printf("Please enter two letters separated by a comma: ");
	scanf_s(" %c,%c", &letter1, 1, &letter2, 1); // NOTE: comma in between %c and %c negates FIRST comma capture; will capture whitespace unless accounted for in scanf_s format
	printf("You entered letters %c and %c.\n", letter1, letter2);

	return 0;
}
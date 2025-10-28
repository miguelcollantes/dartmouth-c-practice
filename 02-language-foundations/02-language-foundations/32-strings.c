#include <stdio.h>

int main(void) {
	// we want to store the word: 'fun'
	char inputString[4]; // array of characters (string); need 4 because null terminator needs to be appended to end of word (done automatically)

	scanf_s(" %s", inputString, 4); // for %s, no '&' placed in front of variable name

	printf("The word is: %s\n", inputString);
	printf("The characters are: <%c> <%c> <%c> <%c>\n", inputString[0], inputString[1], inputString[2], inputString[3]);

	inputString[1] = 'o';

	printf("%s\n", inputString);

	return 0;
}
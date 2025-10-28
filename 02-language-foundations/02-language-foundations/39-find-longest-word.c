/*
Find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words.

Write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.



Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7
Input:
7
All cats are grey in the dark
Output:
4
*/

#include <stdio.h>

int main(void) {
	int numWords;
	char word[101];
	int index = 0;
	int longestLength = 0;

	scanf_s(" %d", &numWords);

	for (int i = 0; i < numWords; i++) {
		scanf_s(" %s", word, 101);

		while (word[index] != '\0') {
			index++;
		}

		if (index > longestLength) {
			longestLength = index;
		}
		
		index = 0;
	}

	printf("%d", longestLength);

	return 0;
}
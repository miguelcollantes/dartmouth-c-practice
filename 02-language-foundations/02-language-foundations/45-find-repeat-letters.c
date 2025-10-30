/*
Write a program to find out how many letters occur multiple times in a given word.

Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes).

Next, your program should iterate through the letters of the word and compare each letter with the one following it.If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again.You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.



Examples
Input:
apple
Output:
1


Input:
keeper
Output:
1


Input:
erroneousnesses
Output:
5


Input:
taylor
Output:
0
*/

#include <stdio.h>

int main(void) {
	char word[51];
	int length = 0;
	char temp;
	int repeat = 0;

	scanf_s(" %s", word, 51);

	// find size of word
	while (word[length] != '\0') {
		length++;
	}

	// alphabetically sort
	for (int i = 0; i < length - 1; i++) {

		for (int j = 0; j < length - 1; j++) {

			if (word[j] > word[j + 1]) {
				temp = word[j];
				word[j] = word[j + 1];
				word[j + 1] = temp;
			}
		}
	}

	// printf("%s\n", word);

	for (int k = 0; k < length - 1; k++) {
		if (word[k] == word[k + 1]) {
			repeat++;
			while (word[k] == word[k + 1]) {
				k++;
			}
		}
	}

	printf("%d", repeat);

	return 0;
}
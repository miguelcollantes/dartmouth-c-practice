/*
15
Do not judge a book by its cover
Cross that bridge when you get there
*/

#include <stdio.h>

int main(void) {
	int numWords;
	int length[11];
	char word[11];
	int index = 0;

	printf("How many words do you want to input? \n");
	scanf_s(" %d", &numWords);

	for (int i = 0; i < 11; i++) {
		length[i] = 0;
	}

	for (int j = 0; j < numWords; j++) {
		scanf_s(" %s", word, 11);

		while (word[index] != '\0') {
			index++;
		}

		length[index] += 1;
		index = 0;
	}

	for (int k = 0; k < 11; k++) {
		printf("There are %d words with %d letters\n", length[k], k);
	}

	return 0;
}
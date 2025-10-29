#include <stdio.h>

int main(void) {
	char word1[50];
	char word2[50];
	int index = 0;

	printf("please enter two words separated by a space: ");
	scanf_s(" %s %s", word1, 50, word2, 50);

	// find first letter in which the words differ
	while (word1[index] == word2[index] && word1[index] != '\0' && word2[index] != '\0') {
		index++;
	}

	if (word1[index] < word2[index]) {
		printf("%s\n%s", word1, word2);
	}

	else if (word2[index] < word1[index]) {
		printf("%s\n%s", word2, word1);
	}

	else {
		printf("you entred the same word twice: %s", word1);
	}



	return 0;
}
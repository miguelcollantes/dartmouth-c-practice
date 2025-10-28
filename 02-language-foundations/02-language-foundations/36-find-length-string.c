#include <stdio.h>

int main(void) {
	char inputWord[30];
	printf("Please enter a word: ");
	scanf_s(" %s", inputWord, 30);
	int index = 0;

	while (inputWord[index] != '\0') {
		index++;
	}

	printf("%s has %d letters\n", inputWord, index);

	return 0;
}
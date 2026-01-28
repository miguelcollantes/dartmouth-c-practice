#include <stdio.h>

int main(void) {
	char words[3][10];

	printf("Please enter 3 words with 9 letters or less:\n");

	for (int i = 0; i < 3; i++) {
		scanf_s(" %s", words[i], 10);
	}

	printf("\nYou entered:\n");

	for (int i = 0; i < 3; i++) {
		printf("%d. %s\n", i + 1, words[i]);
	}

	printf("\nYou entered:\n");

	for (int i = 0; i < 3; i++) {
		printf("%d. %s\n", i + 1, *(words + i));
	}

	printf("\nFirst letters: \n");

	for (int i = 0; i < 3; i++) {
		printf("%d. %c\n", i + 1, words[i][0]);
	}

	printf("\nSecond letters: \n");

	for (int i = 0; i < 3; i++) {
		printf("%d. %c\n", i + 1, *(words[i] + 1));
	}

	printf("\nThird letters: \n");

	for (int i = 0; i < 3; i++) {
		printf("%d. %c\n", i + 1, *(*(words + i) + 2));
	}
	return 0;
}
#include < stdio.h>

int main(void) {
	char a[4]; // 3 letter word + 1 for null term '\0'
	char b[6];
	char c[9];
	char* words[3] = { a, b, c };

	printf("Please enter a word with at most 3 letters: ");
	scanf_s(" %s", a, 4);
	printf("You entered: %s\n\n", a);

	printf("Please enter a word with at most 5 letters: ");
	scanf_s(" %s", b, 6);
	printf("You entered: %s\n\n", b);

	printf("Please enter a word with at most 8 letters: ");
	scanf_s(" %s", c, 9);
	printf("You entered: %s\n\n", c);

	printf("You entered the following words:\n");

	for (int i = 0; i < 3; i++) {
		// printf("%d. %s\n", i + 1, words[i]);
		printf("%d. %s\n", i + 1, *(words + i));
	}

	return 0;
}
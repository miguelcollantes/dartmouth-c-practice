/*
3 5 2 2 1 4 6
*/

#include <stdio.h>

int main(void) {
	int diceValue = 0;
	int rolls = 0;

	scanf_s(" %d", &diceValue);

	while (diceValue != 6) {
		scanf_s(" %d", &diceValue);
		rolls++;
	}

	printf("Took %d rolls to get a 6\n", rolls + 1);

	return 0;
}
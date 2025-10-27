/*
5 4
1 4 2 3
3 2 6 4
2 4 1 4
2 2 1 4
3 6 1 2
*/

#include <stdio.h>

int main(void) {
	int numPlayers = 0;
	int numDice = 0;
	int diceValue = 0;
	int throwSum = 0;

	scanf_s(" %d %d", &numPlayers, &numDice);

	for (int player = 0; player < numPlayers; player++) {
		for (int die = 0; die < numDice; die++) {
			scanf_s(" %d", &diceValue);
			throwSum += diceValue;
		}

		printf("Player %d throw sum equals: %d\n", player + 1, throwSum);
		throwSum = 0;
	}

	return 0;
}
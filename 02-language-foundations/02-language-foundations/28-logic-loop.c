#include <stdio.h>

int main(void) {
	int goal = 1000;
	int newSignatures = 3;
	int totalSignatures = 3;
	int daysNeeded = 0;

	while (totalSignatures <= goal) {
		newSignatures *= 2;
		totalSignatures += newSignatures;
		daysNeeded++;
		printf("Day %d: %d new signatures and %d total signatures\n", daysNeeded, newSignatures, totalSignatures);
	}

	printf("days needed to reach %d signatures is %d\n", goal, daysNeeded);

	return 0;
}
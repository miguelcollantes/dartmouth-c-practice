#include <stdio.h>

int main(void) {
	int sunny = 1;
	int vacation = 1;
	int sunANDvac = sunny && vacation;

	// 1 && 1 : 1,  1 && 0 : 0,  0 && 1 : 0,  0 && 0 : 0

	if (sunANDvac) {
		printf("YAY!\n");
	}

	else {
		printf("Darn.\n");
	}

	return 0;
}
#include <stdio.h>

int main(void) {
	int sunny = 1;
	int vacation = 0;
	int sunORvac = sunny || vacation;

	if (sunORvac) {
		printf("YAY!\n");
	}

	else {
		printf("Darn.\n");
	}

	return 0;
}
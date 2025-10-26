#include <stdio.h>

int main(void) {
	int sunny = 0;
	int NOTsunny = !sunny;

	if (NOTsunny) {
		printf("It's not sunny outside.\n");
	}

	int vacation = 1;
	int NOTsunnyANDvac = !sunny && vacation;

	if (NOTsunnyANDvac) {
		printf("It's not sunny and I'm on vacation.\n");
	}

	return 0;
}
#include <stdio.h>

int main(void) {
	int inputValue;
	printf("Please enter a target integer: ");
	scanf_s(" %d", &inputValue);

	if (inputValue >= 0) {
		for (int i = 0; i < inputValue; i++) {
			if (i % 2) {
				printf(" %d ", i);
			}
		}
	}

	else {
		printf("Nothing to do.\n");
	}

	return 0;
}
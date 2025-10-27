#include <stdio.h>

int main(void) {
	int ages[10];
	int maxAge = -1;

	for (int i = 0; i < 10; i++) {
		scanf_s(" %d", &ages[i]);
		if (ages[i] > maxAge) {
			maxAge = ages[i];
		}
	}

	printf("The maximum age is: %d\n", maxAge);
	printf("Age difference from the eldest person:\n");

	for (int i = 0; i < 10; i++) {
		printf("%d : %d : %d\n", maxAge, ages[i], maxAge - ages[i]);
	}

	return 0;
}
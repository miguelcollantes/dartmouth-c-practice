#include <stdio.h>

int main(void) {
	int age;
	printf("What is your age?\n");
	scanf_s(" %d", &age);
	int adult = age >= 18;
	int senior = age >= 65;
	int workForce = adult && !senior;

	if (workForce) {
		printf("You are eligible for normal employment.\n");
	}

	else {
		if (senior) {
			printf("You are a senior and can retire if able to.\n");
		}

		else {
			printf("You are not old enough to work.\n");
		}
	}


	return 0;
}
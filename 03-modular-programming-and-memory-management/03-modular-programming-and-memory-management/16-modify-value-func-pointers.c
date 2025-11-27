#include <stdio.h.>

void addThree(int*);

int main(void) {
	int a = 5;

	printf("'a' is: %d\n", a);
	addThree(&a);
	printf("'a' is now: %d\n", a);

	return 0;
}

void addThree(int* a) {
	*a = *a + 3;
}
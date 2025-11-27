#include <stdio.h>

void swap(int*, int*);

int main(void) {
	int a = 10;
	int b = 23;

	swap(&a, &b);

	printf("%d %d\n", a, b);

	return 0;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
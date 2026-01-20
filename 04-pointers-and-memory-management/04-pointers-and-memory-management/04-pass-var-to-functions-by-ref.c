#include <stdio.h>

void add(int, int, int*);

int main(void) {
	int a, b, sum;
	
	printf("In main: Please enter two integers: ");
	scanf_s(" %d %d", &a, &b);
	printf("In main: You entered: %d and %d\n", a, b);

	add(a, b, &sum);

	printf("In main: %d + %d = %d\n", a, b, sum);

	return 0;
}

void add(int x, int y, int* p_z) {

	printf("In function: Adding %d and %d together...\n", x, y);
	*p_z = x + y;
	printf("In function: x + y = %d\n", *p_z);

	return *p_z;
}
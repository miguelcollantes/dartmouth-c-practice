#include <stdio.h>

void timesTwo(int*);

int main(void) {
	int num;

	printf("Please enter an integer: ");
	scanf_s(" %d", &num);
	printf("In main: num = %d\n", num);

	timesTwo(&num);

	printf("In main: num now = %d\n", num);

	return 0;
}

void timesTwo(int* p_num) {
	printf("In timesTwo: p_num is %d\n", *p_num);
	*p_num *= 2;
	printf("In timesTwo: p_num changed to %d\n", *p_num);
}
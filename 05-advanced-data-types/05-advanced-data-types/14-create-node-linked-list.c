#include <stdio.h>
#include <stdlib.h>

struct digit {
	int num;
	struct digit* p_next;
};

struct digit* createDigit(int);

int main(void) {
	int n = 5;
	struct digit* p_newDigit = createDigit(n);

	printf("We are storing the digit %d and the pointer %p at memory location %p.\n", p_newDigit->num, p_newDigit->p_next, p_newDigit);
	free(p_newDigit);

	return 0;
}

struct digit* createDigit(int digit) {
	struct digit* p_digit = (struct digit*)malloc(sizeof(struct digit));

	p_digit->num = digit;
	p_digit->p_next = NULL;

	return p_digit;
}
#include <stdio.h>
#include <stdlib.h>

struct digit {
	int num;
	struct digit* p_next;
};

struct digit* createDigit(int);
struct digit* append(struct digit*, struct digit*);
void printDigits(struct digit*);
void freeDigits(struct digit*);

int main(void) {
	struct digit* p_start;
	struct digit* p_newDigit;
	struct digit* p_end;
	int first = 5;
	int second = 741;
	int third = 688;

	p_start = p_end = createDigit(first);
	p_newDigit = createDigit(second);
	p_end = append(p_end, p_newDigit);
	p_newDigit = createDigit(third);
	p_end = append(p_end, p_newDigit);
	
	printDigits(p_start);
	freeDigits(p_start);

	return 0;
}

struct digit* createDigit(int digit) {
	struct digit* p_ptr = (struct digit*)malloc(sizeof(struct digit));

	p_ptr->num = digit;
	p_ptr->p_next = NULL;

	return p_ptr;
}

struct digit* append(struct digit* p_end, struct digit* p_new) {
	p_end->p_next = p_new;

	return p_end->p_next;
}

void printDigits(struct digit* p_start) {
	struct digit* p_ptr = p_start;

	while (p_ptr != NULL) {
		printf("%d", p_ptr->num);
		p_ptr = p_ptr->p_next;
	}
}

void freeDigits(struct digit* p_start) {
	struct digit* p_ptr = p_start;

	while (p_ptr != NULL) {
		p_start = p_ptr;
		p_ptr = p_start->p_next;
		free(p_start);
	}
}
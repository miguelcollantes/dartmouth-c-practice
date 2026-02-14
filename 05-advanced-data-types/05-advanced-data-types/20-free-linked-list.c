#include <stdio.h>
#include <stdlib.h>

struct digit {
	int num;
	struct digit* p_next;
};

struct digit* createDigit(int);
struct digit* append(struct digit*, struct digit*);
void freeDigits(struct digit*);
void printDigits(struct digit*);

int main(void) {
	struct digit* p_start;
	struct digit* p_ptr;
	struct digit* p_end;
	int first = 21;
	int second = 25;
	int third = 30;
	int fourth = 36;

	p_start = p_end = p_ptr = createDigit(first);
	p_end = append(p_end, p_ptr);
	p_ptr = createDigit(second);
	p_end = append(p_end, p_ptr);
	p_ptr = createDigit(third);
	p_end = append(p_end, p_ptr);
	p_ptr = createDigit(fourth);
	p_end = append(p_end, p_ptr);

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
	return p_new;
}

void freeDigits(struct digit* p_start) {
	struct digit* p_ptr = p_start;
	while (p_ptr != NULL) {
		p_start = p_ptr;
		p_ptr = p_ptr->p_next;
		free(p_start);
	}
}

void printDigits(struct digit* p_start) {
	struct digit* p_ptr = p_start;
	while (p_ptr != NULL) {
		printf("%d", p_ptr->num);
		p_ptr = p_ptr->p_next;
	}
}


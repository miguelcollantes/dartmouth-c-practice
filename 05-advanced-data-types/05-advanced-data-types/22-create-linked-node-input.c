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
struct digit* readDigits();

int main(void) {
	struct digit* p_start;
	// struct digit* p_ptr;
	// struct digit* p_end;

	/*
	int first = 1;
	int second = 2;
	int third = 3;
	int fourth = 4;

	p_start = p_end = createDigit(first);
	p_ptr = createDigit(second);
	p_end = append(p_end, p_ptr);
	p_ptr = createDigit(third);
	p_end = append(p_end, p_ptr);
	p_ptr = createDigit(fourth);
	p_end = append(p_end, p_ptr);
	*/

	p_start = readDigits();
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
		p_ptr = p_ptr->p_next;
		free(p_start);
	}
}

struct digit* readDigits() {
	char c;
	int n;
	struct digit* p_start = NULL;
	struct digit* p_ptr;
	struct digit* p_end = NULL;
	
	printf("Please enter a number: ");
	scanf_s(" %c", &c); // entering more then 1 digit stays into input buffer

	while (c != '\n') {
		n = c - 48; // numbers are stored in ascii code, which is 48 + original value
		p_ptr = createDigit(n);
		
		if (p_start == NULL) {
			p_start = p_end = p_ptr;
		}

		else {
			p_end = append(p_end, p_ptr);
		}

		scanf_s("%c", &c);
	}

	return p_start;
}
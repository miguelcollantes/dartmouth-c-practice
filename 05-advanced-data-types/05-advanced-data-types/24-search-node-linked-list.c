#include <stdio.h>
#include <stdlib.h>

struct digit {
	int num;
	struct digit* p_next;
};

struct digit* readNumber();
struct digit* createDigit(int);
struct digit* append(struct digit*, struct digit*);
void printNumber(struct digit*);
void freeNumber(struct digit*);
struct digit* searchNumber(struct digit*, int);

int main(void) {
	struct digit* p_start;
	struct digit* p_ptr;
	int search = 5;

	p_start = readNumber();
	printNumber(p_start);
	p_ptr = searchNumber(p_start, search);
	if (p_ptr != NULL) {
		printf("\nFound digit %d at location %p.\n", search, p_ptr);
	}
	else {
		printf("\nDigit %d not found.\n", search);
	}
	freeNumber(p_start);

	return 0;
}

struct digit* readNumber() {
	struct digit* p_start = NULL;
	struct digit* p_ptr = NULL;
	struct digit* p_end = NULL;
	char c;
	int n;

	printf("Please enter a number: ");
	scanf_s(" %c", &c);
	while (c != '\n') {
		n = c - 48;
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

struct digit* createDigit(int digit) {
	struct digit* p_ptr = (struct digit*)malloc(sizeof(struct digit));

	p_ptr->num = digit;
	p_ptr->p_next = NULL;

	return p_ptr;
}

struct digit* append(struct digit* p_old, struct digit* p_new) {
	p_old->p_next = p_new;

	return p_new;
}

void printNumber(struct digit* p_start) {
	struct digit* p_ptr = p_start;

	while (p_ptr != NULL) {
		printf("%d", p_ptr->num);
		p_ptr = p_ptr->p_next;
	}
}

void freeNumber(struct digit* p_start) {
	struct digit* p_ptr = p_start;

	while (p_ptr != NULL) {
		p_start = p_ptr;
		p_ptr = p_ptr->p_next;
		free(p_start);
	}
}

struct digit* searchNumber(struct digit* p_start, int digit) {
	struct digit* p_ptr = p_start;

	// NULL condition must be placed first; shound not attempt to dereference null ptr
	while ((p_ptr != NULL) && (p_ptr->num != digit)) {
		p_ptr = p_ptr->p_next;
	}

	return p_ptr;
}
/*
void searchNumber(struct digit* p_start, int digit) {
	struct digit* p_ptr = p_start;
	while (p_ptr != NULL) {
		if (p_ptr->num == digit) {
			printf("\n%d is in number.", digit);
			break;
		}
		p_ptr = p_ptr->p_next;
	}
	if (p_ptr == NULL) {
		printf("\n%d is not in number.", digit);
	}
}
*/
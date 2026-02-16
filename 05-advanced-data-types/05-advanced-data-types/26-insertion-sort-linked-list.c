#include <stdio.h>
#include <stdlib.h>

struct digit {
	int num;
	struct digit* p_next;
};

struct digit* readNumber();
struct digit* createDigit(int digit);
struct digit* append(struct digit* p_end, struct digit* p_new);
void printNumber(struct digit* p_start);
void freeNumber(struct digit* p_start);
struct digit* searchNumber(struct digit* p_start, int search);
struct digit* reverseNumber(struct digit* p_start);
struct digit* inFront(struct digit* p_bStart, struct digit* p_newDigit);

int main(void) {
	struct digit* p_start;
	struct digit* p_ptr;
	struct digit* p_backwards;
	int search = 5;

	p_start = readNumber();
	printNumber(p_start);
	p_ptr = searchNumber(p_start, search);
	if (p_ptr != NULL) {
		printf("\nDigit %d found at location %p.\n", search, p_ptr);
	}
	else {
		printf("\nDigit %d not found.\n", search);
	}
	p_backwards = reverseNumber(p_start);
	printNumber(p_backwards);
	freeNumber(p_start);

	return 0;
}

struct digit* readNumber() {
	struct digit* p_start = NULL;
	struct digit* p_ptr = NULL;
	struct digit* p_end = NULL;
	char c;
	int n;

	printf("Please enter your number: ");
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

struct digit* append(struct digit* p_end, struct digit* p_new) {
	p_end->p_next = p_new;

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

struct digit* searchNumber(struct digit* p_start, int search) {
	struct digit* p_ptr = p_start;

	while ((p_ptr != NULL) && (p_ptr->num != search)) {
		p_ptr = p_ptr->p_next;
	}

	return p_ptr;
}

struct digit* reverseNumber(struct digit* p_start) {
	struct digit* p_ptr = p_start;
	struct digit* p_front = NULL;
	struct digit* p_newDigit;

	if (p_start != NULL) {
		p_front = createDigit(p_start->num);
		p_ptr = p_ptr->p_next;
	}
	while (p_ptr != NULL) {
		p_newDigit = createDigit(p_ptr->num);
		p_front = inFront(p_front, p_newDigit);
		p_ptr = p_ptr->p_next;
	}

	return p_front;
}

struct digit* inFront(struct digit* p_front, struct digit* p_newDigit) {
	p_newDigit->p_next = p_front;

	return p_newDigit;
}
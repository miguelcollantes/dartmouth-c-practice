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
struct digit* sortNumber(struct digit* p_start);
struct digit* insertIntoSort(struct digit* p_front, struct digit* p_input);

int main(void) {
	struct digit* p_start;
	struct digit* p_ptr;
	struct digit* p_backwards;
	struct digit* p_sorted;
	int search = 5;

	p_start = readNumber();
	printNumber(p_start);
	p_ptr = searchNumber(p_start, search);
	if (p_ptr != NULL) {
		printf("Digit %d found at location %p.\n", search, p_ptr);
	}
	else {
		printf("Digit %d not found.\n", search);
	}
	p_backwards = reverseNumber(p_start);
	printNumber(p_backwards);
	p_sorted = sortNumber(p_start);
	printNumber(p_sorted);
	freeNumber(p_start);
	freeNumber(p_backwards);
	freeNumber(p_sorted);

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
	printf("\n");
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
	struct digit* p_input;

	if (p_start != NULL) {
		p_front = createDigit(p_start->num);
		p_ptr = p_ptr->p_next;
	}
	while (p_ptr != NULL) {
		p_input = createDigit(p_ptr->num);
		p_front = inFront(p_front, p_input);
		p_ptr = p_ptr->p_next;
	}

	return p_front;
}

struct digit* inFront(struct digit* p_front, struct digit* p_input) {
	p_input->p_next = p_front;

	return p_input;
}

struct digit* sortNumber(struct digit* p_start) {
	struct digit* p_ptr = p_start;
	struct digit* p_front = NULL;
	struct digit* p_input;

	if (p_ptr != NULL) {
		p_front = createDigit(p_start->num);
		p_ptr = p_ptr->p_next;
	}
	while (p_ptr != NULL) {
		p_input = createDigit(p_ptr->num);
		p_front = insertIntoSort(p_front, p_input);
		p_ptr = p_ptr->p_next;
	}

	return p_front;
}

struct digit* insertIntoSort(struct digit* p_front, struct digit* p_input) {
	struct digit* p_ptr = p_front;
	struct digit* p_prev = NULL;

	while ((p_ptr != NULL) && (p_ptr->num < p_input->num)) {
		p_prev = p_ptr;
		p_ptr = p_ptr->p_next;
	}
	if (p_prev == NULL) {
		p_front = inFront(p_front, p_input);
	}
	else {
		p_prev->p_next = p_input;
		p_input->p_next = p_ptr;
	}

	return p_front;
}
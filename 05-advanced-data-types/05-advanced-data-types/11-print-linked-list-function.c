#include <stdio.h>
// #include <stdlib.h>

struct point {
	int x;
	int y;
	struct point* p_next;
};

void printPoints(struct point*);

int main(void) {
	struct point pt1 = { 741, 726, NULL };
	struct point pt2 = { 586, 148, NULL };
	struct point pt3 = { 688, 553, NULL };
	struct point* p_start;
	// struct point* p_current;

	p_start = &pt1;
	pt1.p_next = &pt2;
	pt2.p_next = &pt3;

	/*
	p_current = p_start;

	while (p_current != NULL) {
		printf("(%03d,%03d)\n", p_current->x, p_current->y);
		p_current = p_current->p_next;
	}
	*/

	printPoints(p_start);

	return 0;
}

void printPoints(struct point* p_start) {
	struct point* p_ptr = p_start;

	while (p_ptr != NULL) {
		printf("(%03d,%03d)\n", p_ptr->x, p_ptr->y);
		p_ptr = p_ptr->p_next;
	}
}
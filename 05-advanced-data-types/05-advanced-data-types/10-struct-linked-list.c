#include <stdio.h>
// #include <stdlib.h>

struct point {
	int x;
	int y;
	struct point* p_next;
};

int main(void) {
	struct point pt1 = { 1, -5, NULL }; // do not know next point right now
	struct point pt2 = { 3, 7, NULL };
	struct point pt3 = { -9, 11, NULL };
	struct point* p_start; // keeps track of where list starts
	struct point* p_ptr; // helps move through list

	p_start = &pt1;
	pt1.p_next = &pt2;
	pt2.p_next = &pt3;

	p_ptr = p_start;

	while (p_ptr != NULL) {
		printf("(%02d,%02d)\n", p_ptr->x, p_ptr->y);
		p_ptr = p_ptr->p_next;
	}

	return 0;
}
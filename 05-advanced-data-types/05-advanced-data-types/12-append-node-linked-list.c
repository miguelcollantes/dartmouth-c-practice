#include <stdio.h>
// #include <stdlib.h>

struct point {
	int x;
	int y;
	struct point* p_next;
};

void printPoints(struct point*);
struct point* append(struct point*, struct point*);

int main(void) {
	struct point pt1 = { 10, 15, NULL };
	struct point pt2 = { 20, 25, NULL };
	struct point pt3 = { 30, 35, NULL };
	struct point* p_start;
	struct point* p_end;
	
	p_start = p_end = &pt1; // multiple assigment statements evaluated right to left

	/*
	pt1.p_next = &pt2;
	pt2.p_next = &pt3;
	*/

	p_end = append(p_end, &pt2); // list as pairs to link former to latter
	p_end = append(p_end, &pt3);

	printPoints(p_start);

	return 0;
}

void printPoints(struct point* p_start) {
	struct point* p_ptr = p_start;

	while (p_ptr != NULL) {
		printf("(%02d, %02d)\n", p_ptr->x, p_ptr->y);
		p_ptr = p_ptr->p_next;
	}
}

struct point* append(struct point* p_node, struct point* p_link) {
	p_node->p_next = p_link;
	
	return p_node->p_next;
}
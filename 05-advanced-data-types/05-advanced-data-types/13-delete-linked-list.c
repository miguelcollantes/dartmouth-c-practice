#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
	struct point* p_next;
};

struct point* appendPoint(struct point*, struct point*);
void printPoints(struct point*);
struct point* createPoint(int, int);
void freePoints(struct point*);

int main(void) {
	/*
	struct point pt1 = { 111, 222, NULL };
	struct point pt2 = { 2 , 3, NULL };
	struct point pt3 = { 33, 44, NULL };
	*/
	struct point* p_start = NULL;
	struct point* p_end = NULL;
	struct point* p_newPoint = NULL;
	int numPoints;
	int x;
	int y;

	printf("How many points do you want to store in the list? ");
	scanf_s(" %d", &numPoints);

	for (int i = 0; i < numPoints; i++) {
		printf("Ordered pair #%d: x = ", i + 1);
		scanf_s(" %d", &x);
		printf("Ordered pair #%d: y =", i + 1);
		scanf_s(" %d", &y);

		p_newPoint = createPoint(x, y);

		if (i == 0) {
			p_start = p_end = p_newPoint;
		}

		else {
			p_end = appendPoint(p_end, p_newPoint);
		}
	}

	/*
	p_start = p_end = &pt1;

	p_end = appendPoint(p_end, &pt2);
	p_end = appendPoint(p_end, &pt3);
	*/

	printf("You entered:\n");
	printPoints(p_start);

	freePoints(p_start);

	return 0;
}

struct point* appendPoint(struct point* p_end, struct point* p_add) {
	p_end->p_next = p_add;

	return p_end->p_next;
}

void printPoints(struct point* p_start) {
	struct point* p_ptr = p_start;

	while (p_ptr != NULL) {
		printf("(%03d, %03d)\n", p_ptr->x, p_ptr->y);
		p_ptr = p_ptr->p_next;
	}
}

struct point* createPoint(int x, int y) {
	struct point* p_ptr = (struct point*)malloc(sizeof(struct point));

	p_ptr->x = x;
	p_ptr->y = y;
	p_ptr->p_next = NULL;

	return p_ptr;
}

void freePoints(struct point* p_start) {
	struct point* p_ptr = p_start;

	while (p_ptr != NULL) {
		p_start = p_ptr;
		p_ptr = p_start->p_next;
		free(p_start);
	}
}
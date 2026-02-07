#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
};

void readPoint(struct point*);
void printPoint(struct point);
void printPolygon(struct point*, int*);

int main(void) {
	struct point* polygon; // since size not known, struct created as ptr vice element
	int num;

	printf("How many vertices does your polygon have? ");
	scanf_s(" %d", &num);

	polygon = (struct point*)malloc(num * sizeof(struct point));

	for (int i = 0; i < num; i++) {
		readPoint(&polygon[i]);
	}

	printPolygon(polygon, &num);
	free(polygon);

	return 0;
}

void readPoint(struct point* p_point) {
	printf("\nEnter a new point:\n");
	printf("x-coordinate: ");
	scanf_s(" %d", &(*p_point).x);
	printf("y-coordinate: ");
	scanf_s(" %d", &p_point->y);
}

void printPoint(struct point point) {
	printf("\nUser coordinates: (%d,%d)\n", point.x, point.y);
}

void printPolygon(struct point* p_polygon, int* num) {

	for (int i = 0; i < *num; i++) {
		printf("Point #%d. (%d,%d)\n OR", i + 1, (*(p_polygon + i)).x, p_polygon[i].y);
		printPoint(p_polygon[i]);
		printf("\n");
	}
}
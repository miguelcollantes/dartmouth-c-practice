#include <stdio.h>
// #include <stdlib.h>

struct point {
	int x;
	int y;
};

void readPoint(struct point*);
void printPoint(struct point);
void printTriangle(struct point*);

int main(void) {
	//struct point z;

	//readPoint(&z);
	//printPoint(z);
	
	// 3 points needed to plot triangle
	struct point triangle[3];

	// readPoint(&triangle[0]);
	// readPoint(&triangle[1]);
	// readPoint(&triangle[2]);

	int num = sizeof(triangle) / sizeof(triangle[0]);

	for (int i = 0; i < num; i++) {
		readPoint(&triangle[i]);
	}

	/*
	for (int i = 0; i < num; i++) {
		printPoint(triangle[i]);
	}
	*/

	printTriangle(triangle);

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

void printTriangle(struct point* p_triangle) {
	int numSides = 3;

	for (int i = 0; i < numSides; i++) {
		printf("Point #%d. (%d,%d)\n OR", i + 1, (*(p_triangle + i)).x, p_triangle[i].y);
		printPoint(p_triangle[i]);
		printf("\n");
	}
}
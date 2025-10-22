#include <stdio.h>

int main(void) {
	double height = 5.65;
	printf("Sam is %.2lf\n", height);
	printf("How tall are you (feet)?\n");
	scanf_s("%lf", &height);
	printf("Cool! Now I know you are %.2lf feet tall!\n", height);

	return 0;
}
#include <stdio.h>

int main(void) {
	double dOne, dTwo;
	int iOne, iTwo;

	printf("Enter two decimals: \n");
	scanf_s("%lf %lf", &dOne, &dTwo);

	printf("You entered %lf and %lf\n", dOne, dTwo);

	iOne = (int)dOne;
	iTwo = (int)dTwo;

	printf("iOne = %d; iTwo = %d\n", iOne, iTwo);
	printf("%d / %d = %d", iOne, iTwo, iOne / iTwo);

	return 0;
}
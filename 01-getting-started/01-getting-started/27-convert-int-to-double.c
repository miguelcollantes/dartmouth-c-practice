#include <stdio.h>

int main(void) {
	int iOne = 1;
	int iTwo = 2;
	double dOne;

	printf("Please enter two integers: \n");
	scanf_s("%d %d", &iOne, &iTwo);

	dOne = (double)iOne;
	
	printf("%d can be converted to double to equal %lf\n", iOne, dOne);
	printf("Dividing %d by %d = %lf", iOne, iTwo, dOne / iTwo);

	return 0;
}
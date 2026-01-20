#include <stdio.h>

void myFunction(int*, double*, char*);

int main(void) {
	int i = 741;
	int* iAddr = &i;

	printf("i = %d at address %p\n", i, iAddr);
	printf("iAddr dereferenced = %d\n\n", *iAddr);

	double d = 3.14;
	double* dAddr = &d;

	printf("d = %.2lf at address %p\n", d, dAddr);
	printf("dAddr dereferenced = %.2lf\n\n", *dAddr);

	char c = 'm';
	char* cAddr;
	cAddr = &c;

	printf("c = %c at address %p\n", c, cAddr);
	printf("cAddr dereferenced = %c\n\n", *cAddr);

	myFunction(iAddr, dAddr, cAddr);

	*iAddr = 50;

	printf("i now equals %d at address %p.\n", i, iAddr);
	printf("iAddr dereferenced = %d\n\n", *iAddr);

	*dAddr = 2.1718;

	printf("d now equals %.4lf at address %p.\n", d, dAddr);
	printf("dAddr dereferenced = %.4lf.\n\n", *dAddr);

	*cAddr = 'M';

	printf("c now equals %c at address %p.\n", c, cAddr);
	printf("cAddr dereferenced = %c.\n\n", *cAddr);

	return 0;
}

void myFunction(int* iptr, double* dptr, char* cptr) {
	printf("Function received addresses:\n%p\n%p\n%p\n\n", iptr, dptr, cptr);
}
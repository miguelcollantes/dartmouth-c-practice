/*
	5! = 1*2*3*4*5
	n! = 1*2*3*...*(n-1)*n
*/
#include <stdio.h>

int factorial(n);

int main(void) {
	int n;
	int factoLoop = 1;
	int factoFunc;

	printf("Please enter a positve integer: ");
	scanf_s(" %d", &n);


	// factorial with loop recursion
	for (int i = 1; i <= n; i++) {
		factoLoop = factoLoop * i ;
	}

	if (n < 0) {
		printf("Negative input . . . Closing program\n");
	}
	
	else {
		factoFunc = factorial(n);
		printf("Factorial Loop: %d\nFactorial Function: %d", factoLoop, factoFunc);
	}

	return 0;
}

// factorial with function recursion
int factorial(int n) {
	int result;

	if (n == 0) {
		result = 1;
		return result;
	}

	else {
		result = n * factorial(n - 1);
		return result;
	}
}

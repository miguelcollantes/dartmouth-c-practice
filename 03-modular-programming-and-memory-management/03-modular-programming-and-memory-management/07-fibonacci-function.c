#include <stdio.h>

int fibonacci(int);

// Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
int main(void) {	
	int n;
	int seqNum;

	printf("Which number in the Fibonacci sequnce would you like to see? ");
	scanf_s(" %d", &n);

	if (n <= 0) {
		printf("%d is not a Fibonnaci sequence number!", n);
	}

	else {
		seqNum = fibonacci(n);

		printf("Number %d in the Fibonacci sequence is: %d", n, seqNum);
	}
	return 0;
}

int fibonacci(int n) {
	int n1 = 0;
	int n2 = 1;
	int nX;
	int result;

	if (n == 1) {
		result = n1;
	}

	else if (n == 2) {
		result = n2;
	}

	else {
		result = fibonacci(n - 1) + fibonacci(n - 2);
	}
	/* Fibonacci for-loop
	else {
		for (int i = 0; i < n; i++) {
			nX = n1 + n2;
			n1 = n2;
			n2 = nX;
		}

		result = nX;
	}
	*/

	return result;
}
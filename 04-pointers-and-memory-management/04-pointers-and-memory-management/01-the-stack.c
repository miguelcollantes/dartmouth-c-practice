#include <stdio.h>

double myFunction(int, double, char);

int main(void) {
	char c;
	double d, q;
	int arr[3];

	c = 'm';
	d = 1.0;

	for (int i = 0; i < 3; i++) {
		arr[i] = i * i + 1;
		q = myFunction(arr[i], (d * i), c);
	}

	printf("Outside of function, values are untouched; array integer are: %d, %d, and %d,  double is: %.3lf, char is: %c\n", arr[0], arr[1], arr[2], d, c);

	return 0;
}

double myFunction(int i, double d, char c) {
	printf("Function received integer: %d, double: %.3lf, and character: %c\n", i, d, c);
	i++;
	d *= i;
	c = 'c';
	printf("In function, changed values; integer now equals: %d, double now equals: %.3lf, and character now equals: %c\n\n", i, d, c);
	
	return d;
}
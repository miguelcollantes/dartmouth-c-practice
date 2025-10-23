/*
Read inputs one by one, all of which are integers. First input is the avg. Your program shoud calculate and print the average of the grades to two decimal places.

Example

Input:
4
10
8
16
9

Output:
10.75
*/

#include <stdio.h>

int main(void) {
	int avg;
	int num;
	int sum = 0;
	double final;

	scanf_s("%d", &avg);

	for (int i = 0; i < avg; i++) {
		scanf_s("%d", &num);
		sum += num;
	}

	final = sum / (double)avg;
	printf("%.2lf", final);

	return 0;
}
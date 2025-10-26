/*
Write a program that reads two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. Your program must then display the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.

Example:

Input
5
6

Output
Special tax
36

------

Input
4
3

Output
Regular tax
14
*/

#include <stdio.h>

int main(void) {
	int die1;
	int die2;
	int specialTax = 36;
	int sum = 0;

	scanf_s("%d %d", &die1, &die2);

	if ((die1 + die2) >= 10) {
		sum += specialTax;
		printf("Special tax\n");
	}

	else {
		sum += 2 * (die1 + die2);
		printf("Regular tax\n");
	}

	printf("%d\n", sum);

	return 0;
}
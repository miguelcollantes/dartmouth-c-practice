/*
Housekeeping finishes preparing rooms by noon, and the sooner guests arrive after noon, the less they have to pay. You are trying to build a C program that calculates your price to pay based on your arrival time.

Your program will read an integer (between 0 and 12) indicating the number of hours past noon of your arrival. For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. The base price is 10 dollars, and 5 dollars are added for every hour after noon. Thankfully the total is capped at 53 dollars, so you'll never have to pay more than that. Your program should print the price (an integer) you have to pay, given the input arrival time.

Example 1:

Input
7

Output
45

------

Example 2:

Input
10

Output
53
*/

#include <stdio.h>

int main(void) {
	int base = 10;
	int add = 5;
	int max = 53;
	int time = 0;
	int result = 0;

	scanf_s("%d", &time);

	result = base + (add * time);
	
	if (result > max) {
		result = max;
	}

	printf("%d", result);

	return 0;
}
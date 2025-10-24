/*
A store only sells cement in 120-pound bags. Each of these bags costs 45 dollars. Write a program that calculates the cost of the cement you will have to purchase.

Your program should first read a decimal number representing the amount of cement needed (in pounds). Your program should then display the total cost of the cement bags you have to purchase to have enough cement. To make your program simpler, you are guaranteed that the amount of cement needed will NEVER be a multiple of 120.

Example

Input:
295.8

Output:
135
*/

#include <stdio.h>

int main(void) {
	int bagWeight = 120;
	int bagCost = 45;
	double poundsNeeded;
	int bagsNeeded = 0;

	scanf_s("%lf", &poundsNeeded);

	bagsNeeded = 1 + (int)(poundsNeeded / bagWeight);
	
	printf("%d", bagsNeeded * bagCost);

	return 0;
}
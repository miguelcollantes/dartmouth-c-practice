/*
Write program that first reads an integer representing the current population of a city, and that next reads a decimal number for the projected population growth as a percentage (either positive or negative). The program should then display the expected population of the city in a year as a whole number. By convention we will only consider "whole" people. So a population of 31.8 inhabitants will be considered as having 31 inhabitants.

Example

Input:
123
7.0

Output:
131
*/

#include <stdio.h>

int main(void) {
	int pop;
	double pGrowth;
	double growth;
	int newPop;

	scanf_s("%d %lf", &pop, &pGrowth);

	growth = pop * (pGrowth / 100);
	newPop = pop + (int)growth;

	printf("%d", newPop);

	return 0;
}
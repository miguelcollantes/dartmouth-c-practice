/*
Write a program that starts by reading the amount of money you have (which may be a double), then reads the price of an item (which again may be a double). The program should then display an integer, namely the largest number of items that you can purchase with the given amount of money.

Examples:

Input
48.0
3.50

Output
13
-----
Input
27.0
5.0

Output
5
*/

#include <stdio.h>

int main(void) {
	double money;
	double price;
	int canPurchase;

	scanf_s("%lf %lf", &money, &price);

	canPurchase = (int)(money / price);

	printf("%d", canPurchase);

	return 0;
}
/*
One room costs nothing if you are exactly 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.

Example
Input:
22
25
Output:
40
*/

#include <stdio.h>

int main(void) {
	int custAge;
	int innAge = 60;
	int weight;
	int cost;

	scanf_s(" %d %d", &custAge, &weight);

	int lugTax = weight > 20;

	if (custAge == innAge) {
		cost = 0;
	}

	else {
		if (custAge < 10) {
			cost = 5;
		}

		else {
			cost = 30 + (10 * lugTax);
		}
	}

	printf("%d", cost);

	return 0;
}
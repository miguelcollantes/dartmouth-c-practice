/*
Find the smallest integer in a list of numbers.

Write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). 

min() function takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.

Example
Input
10
4 3 6 2 6 8 9 8 5 4
Output
2
*/

#include <stdio.h>

int min(int, int);

int main(void) {
	int listSize;
	int lowestInt;

	scanf_s(" %d %d", &listSize, &lowestInt);

	for (int i = 1; i < listSize; i++) {
		int inputVal;
		
		scanf_s(" %d", &inputVal);
		lowestInt = min(lowestInt, inputVal);
	}

	printf("%d", lowestInt);

	return 0;
}

int min(int lowestInt, int inputVal) {
	int result = lowestInt;

	if (inputVal < lowestInt) {
		result = inputVal;
	}

	return result;
}
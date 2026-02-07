#include <stdio.h>
#include <stdlib.h>

int* allocateIntArray(int);
double findAverage(int*, int);

int main(void) {
	int arraySize;
	int* array;
	double avg;

	printf("How many grades would you like to enter? ");
	scanf_s(" %d", &arraySize);
	array = allocateIntArray(arraySize);

	printf("Please enter %d grades\n", arraySize);

	for (int i = 0; i < arraySize; i++) {
		
		scanf_s(" %d", (array + i));
	}

	avg = findAverage(array, arraySize);
	printf("The average grade is %.2lf", avg);

	return 0;
}

int* allocateIntArray(int size) {
	int* p_arrayAddress = (int*)malloc(size * sizeof(int));
	return p_arrayAddress;
}

double findAverage(int* array, int size) {
	double average = 0.0;

	for (int i = 0; i < size; i++) {

		average += *(array + i);
	}

	average = average / size;
	return average;
}
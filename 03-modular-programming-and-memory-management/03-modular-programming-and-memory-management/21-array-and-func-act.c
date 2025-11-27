/*
Within this program, we will pass an array with 6 integers to a function, have the function swap the first and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers.

The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.

Examples
Input:
1 2 3 4 5 6
Output:
6 5 4 3 2 1


Input:
9 12 3 25 11 5
Output:
5 11 25 3 12 9
*/

#include <stdio.h>

void reverseArray(int*);

int main(void) {
	int arr[6];
	int arraySize = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arraySize; i++) {
		scanf_s(" %d", &arr[i]);
	}

	reverseArray(arr);

	for (int i = 0; i < arraySize; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void reverseArray(int* ptr) {
	int temp = ptr[0];
	ptr[0] = ptr[5];
	ptr[5] = temp;
	temp = ptr[1];
	ptr[1] = ptr[4];
	ptr[4] = temp;
	temp = ptr[2];
	ptr[2] = ptr[3];
	ptr[3] = temp;
}
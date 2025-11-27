#include <stdio.h>

int main(void) {
	int arr[3] = { 15, 16, 17 };

	printf("%p\n", arr);

	int* ptr = arr;
	*ptr = 2; // modifies arr[0] to equal 2
	printf("%d\n", *arr);

	*arr = 23; // modifies *ptr to equal 23
	printf("%d\n", *ptr);

	*(ptr + 1) = 25; // modifies arr[1] to equal 25 ; adds 1 * sizeof(int) due to ptr pointing to int; same as *(arr + 1) =25
	printf("%d\n", arr[1]);

	*(ptr + 2) = 84;
	printf("%d\n", arr[2]);
	return 0;
}
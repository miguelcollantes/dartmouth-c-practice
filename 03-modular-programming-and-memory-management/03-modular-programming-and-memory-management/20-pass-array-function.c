#include <stdio.h>

void reset(int*);

int main(void) {
	int arr[3] = { 12, 56, 521 };
	int numArray = sizeof(arr) / sizeof(arr[0]);

	reset(arr);

	for (int i = 0; i < numArray; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

void reset(int ptr[]) {
	ptr[0] = 0;
	*(ptr + 1) = 0;
	ptr[2] = 0;
}
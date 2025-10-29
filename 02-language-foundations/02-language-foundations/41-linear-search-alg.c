#include <stdio.h>

int main(void) {
	int list[] = { 6, -2, 5, 12, 7, 3, 8, 18, -10, 1 ,114};
	int itemSize = sizeof(list[0]); // captures single element size
	int listSize = sizeof(list) / itemSize; // calculates total number of elements in the array
	int index;
	int target;

	//printf("%d", listSize);
	printf("What number would you like to search for? ");

	scanf_s(" %d", &target);

	for (index = 0; index < listSize; index++) {
		if (target == list[index]) {
			printf("%d resides at index %d", target, index);
			break;
		}
	}

	if (index == listSize) {
		printf("%d not in list", target);
	}

	return 0;
	}
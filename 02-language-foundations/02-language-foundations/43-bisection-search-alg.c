#include <stdio.h>

int main(void) {
	int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
	int itemSize = sizeof(list[0]);
	int listSize = sizeof(list) / itemSize;
	int target;
	int ia, ib, mid, found;

	scanf_s(" %d", &target);

	ia = 0;
	ib = listSize - 1;
	found = 0;

	while (!found && (ia <= ib)) {
		mid = (ia + ib) / 2; // middle index
		 
		if (target == list[mid]) {
			found = 1; // found target
		}

		else if (target < list[mid]) {
			ib = mid - 1; // toss top half
		}

		else {
			ia = mid + 1; // toss bottom half
		}
	}

	if (ia > ib) {
		printf("%d is not in the list\n", target);
	}

	else {
		printf("%d is at index %d", target, mid);
	}


	return 0;
}
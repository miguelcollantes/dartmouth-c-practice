#include <stdio.h>

int main(void) {
	int list[] = { 759, 14, 2, 900, 106, 77, -10, 8, -3, 5 }; /* unsorted list */
	int itemSize = sizeof(list[0]);
	int listSize = sizeof(list) / itemSize;
	int temp;


	for (int k = 0; k < listSize - 1; k++) {

		for (int i = 0; i < listSize - 1; i++) {

			if (list[i] > list[i + 1]) {
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
		}
	}

	for (int j = 0; j < listSize; j++) {
		printf("%d  ", list[j]);
	}

	return 0;
}
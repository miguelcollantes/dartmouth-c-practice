#include <stdio.h>

int main(void) {
	int num = 2147483645;

	for (int i = 0; i < 8; i++) {
		printf("%d\n", num);
		num++;
	}

	return 0;
}
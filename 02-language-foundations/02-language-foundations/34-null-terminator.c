#include <stdio.h>

int main(void) {
	char input1[5];
	char input2[8];
	
	scanf_s(" %s %s", input1, 5, input2, 8);

	input1[3] = '\0';
	input2[2] = '\0';

	printf("%s %s\n", input1, input2);

	return 0;
}
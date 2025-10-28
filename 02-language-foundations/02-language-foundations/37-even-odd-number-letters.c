/*
Your job is to write a C-program that will tell a fan which line to stand in.

To simplify the program, you may assume that student names are less than 50 characters long and contain no spaces. Your program should output an integer value (1 or 2) depending on whether the fan should join line 1 (name has even number of letters) or line 2 (name has odd number of letters).



Examples
Input:
Sharrock
Output:
1


Input:
Bonfert
Output:
2
*/

#include <stdio.h>

int main(void) {
	char name[51];
	int index = 0;

	scanf_s(" %s", name, 51);

	while (name[index] != '\0') {
		index++;
	}

	if (index % 2) {
		printf("2\n");
	}

	else {
		printf("1\n");
	}

	return 0;
}
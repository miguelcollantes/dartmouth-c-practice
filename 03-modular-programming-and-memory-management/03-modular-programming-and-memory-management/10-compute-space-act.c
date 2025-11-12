/*
Determine how much memory the tracking codes will occupy before storing them. Write a program to assist you in this process.

Your program should first read an integer number indicating how many tracking codes you plan on entering.

Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.

Examples
Input:
3
10 i
7 c
12 d
Output:
143 bytes


Input:
2
3 c
20 d
Output:
163 bytes
*/

#include <stdio.h>

int space(int, char);

int main(void) {
	int numCodes;
	int length;
	char type;
	int sum = 0;

	scanf_s(" %d", &numCodes);

	for (int i = 0; i < numCodes; i++) {
		scanf_s(" %d %c", &length, &type, 1);

		if (!(type == 'i' || type == 'c' || type == 'd')) {
			printf("Invalid tracking code type");
			
			return 0;
		}

		else {
			sum += space(length, type);
		}

	}

	printf("%d bytes", sum);

	return 0;
}

int space(int length, char type) {
	if (type == 'i') {
		return length * sizeof(int);
	}

	else if (type == 'c') {
		return length * sizeof(char);
	}

	else {
		return length * sizeof(double);
	}
}
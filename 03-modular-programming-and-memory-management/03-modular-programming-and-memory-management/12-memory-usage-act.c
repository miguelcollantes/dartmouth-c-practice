/*
You are programming a toaster! The toaster does not have a lot of memory, so you need to be careful about the data types you use (remember that different data types use different amounts of memory). To make this easier, you'd like an easy way to track how much memory your variables are going to use.

Write a program that shows, in human-readable form (see below for specifics), how much memory a set of variables of a certain type will use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). Next it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such a way that it would also perform correctly on other computers. In other words, rather than hard-coding specific sizes for the different variable types, your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. You need to make sure you provide this output in a form that is easy to read for humans. The following examples illustrate what this means:

Examples
If the user input were:

i 36794
then the amount of space needed (if we assume that an integer uses 4 bytes in memory) would be 4*36794 = 147176 bytes. This corresponds to 147 kilobytes and 176 bytes, so the output should be:

147 KB and 176 B


Input:
d 654250
Output:
5 MB and 234 KB and 0 B


Input:
d 35
Output:
280 B
*/

#include <stdio.h>

int main(void) {
	char dataType;
	int numVar;
	int bytes;
	int kiloBytes;
	int megaBytes;

	scanf_s(" %c %d", &dataType, 1, &numVar);

	if (dataType == 'i') {
		bytes = numVar * sizeof(int);
	}

	else if (dataType == 's') {
		bytes = numVar * sizeof(short);
	}

	else if (dataType == 'c') {
		bytes = numVar * sizeof(char);
	}

	else if (dataType == 'd') {
		bytes = numVar * sizeof(double);
	}

	else {
		return 0;
	}

	megaBytes = bytes / 1000000;
	kiloBytes = (bytes / 1000) % 1000;
	bytes = bytes % 1000;
	
	if (megaBytes > 0) {
		printf("%d MB and %d KB and %d B", megaBytes, kiloBytes, bytes);
	}

	else if (kiloBytes > 0) {
		printf("%d KB and %d B", kiloBytes, bytes);
	}
	
	else {
		printf("%d B", bytes);
	}


	return 0;
}
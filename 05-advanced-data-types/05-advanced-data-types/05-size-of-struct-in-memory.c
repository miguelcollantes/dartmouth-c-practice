/*
The size of a structure may be larger than the sum of the sizes of its
members because the compiler can insert padding bytes between fields or
at the end of the structure to satisfy alignment requirements and
improve memory access efficiency.
*/

#include <stdio.h>
// #incldue <stdlib.h>

struct student {
	char firstName[5];
	char lastName[5];
	int birthYear;
	double gpa;
};

int main(void) {
	struct student user;

	printf("Size of struct student is: %zu\n", sizeof(user) /* sizeof(struct student) */);
	printf("Size of firstName is: %zu\n", sizeof(user.firstName));
	printf("Size of lastName is: %zu\n", sizeof(user.lastName));
	printf("Size of birthYear is: %zu\n", sizeof(user.birthYear));
	printf("Size of gpa is: %zu\n", sizeof(user.gpa));
	printf("Padding added is: %zu\n\n", sizeof(user) - sizeof(user.firstName) - sizeof(user.lastName) - sizeof(user.birthYear) - sizeof(user.gpa));

	return 0;
}
/*
Pointers in C (Technical Overview):
- A pointer is a variable that holds a memory address, typically the address of another variable.
- Declaration: Use an asterisk (*) to define a pointer type.
	Example: int *ptr; // 'ptr' is a pointer to an integer
- Address-of operator: The ampersand (&) yields the address of a variable.
	Example: ptr = &x; // assigns the address of 'x' to 'ptr'
- Dereferencing: The asterisk (*) used with a pointer variable accesses (reads/writes) the value stored at the memory address held by the pointer.
	Example: *ptr = 5; // sets the value at the address stored in 'ptr' to 5
			 int y = *ptr; // assigns the value pointed to by 'ptr' to 'y'
- If a pointer is not dereferenced, operations manipulate the pointer's stored address, not the data at that location.
- Uninitialized pointers (dangling) or improper dereferencing lead to undefined behavior (possible access violations or runtime faults).
*/

#include <stdio.h>

int main(void) {
	int a = 42;
	double d = 58.394;
	char c = 'r';

	int *addressOfA = &a;
	printf("The address of [int a] is: %p\n", addressOfA);
	printf("Address [int a] stores variable: %d\n\n", *addressOfA);

	double *addressOfD = &d;
	printf("The address of [double d] is: %p\n", addressOfD);
	printf("Address of [double d] stores variable: %lf\n\n", *addressOfD);

	char *addressOfC = &c;
	printf("The address of [char c] is: %p\n", addressOfC);
	printf("Address [char c] stores variable: %c\n\n", *addressOfC);

	// these two pointer declarations are equivalent:
	int b = 12;

	int *ptr1; // declares ptr1 and expects to point to an integer
	ptr1 = &b; // sets address ptr1 to &b; if we were to dereference, *ptr1 would == [int b] which == 12

	int *ptr2 = &b; // combines declaring ptr2 AND setting prt2 address to &b which == 12

	*ptr2 = 50; // sets b to 50
	*ptr2 = *ptr2 + *ptr1 + 20; // since ptr1 and ptr2 point to b, 50 + 50 + 20 = 120

	printf("At the address of ptr2 which is %p, ptr2 stores: %d\n\n", ptr2, *ptr2);

	return 0;
}
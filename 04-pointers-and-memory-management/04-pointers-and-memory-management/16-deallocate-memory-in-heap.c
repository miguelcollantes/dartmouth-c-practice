// NOTE: This code is for learning purposes only.
// Understand that following free(p_num1), p_num1 becomes a dangling pointer
// Using *p_num1 returns undefined behavior.
// In the Dartmouth C/Linux MOOC codecast, the visual allocator reuses the same address for a new malloc of the same size.
// Real system allocators are NOT required to do that.
// Do NOT rely on p_num3 getting the same address as p_num1 here.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* p_num1;
	int* p_num2;
	int* p_num3;

	p_num1 = (int*)malloc(sizeof(int));
	p_num2 = (int*)malloc(sizeof(int));
	*p_num1 = 1;
	*p_num2 = 2;

	printf("p_num1 stored %d at memory location %p\n\n", *p_num1, p_num1);

	free(p_num1); // frees memory space at address
	p_num3 = (int*)malloc(sizeof(int));
	*p_num3 = 3;

	printf("p_num1 stored %d at memory location %p\n", *p_num1, p_num1);
	printf("p_num2 stored %d at memory location %p\n", *p_num2, p_num2);
	printf("p_num3 stored %d at memory location %p\n", *p_num3, p_num3);

	return 0;
}
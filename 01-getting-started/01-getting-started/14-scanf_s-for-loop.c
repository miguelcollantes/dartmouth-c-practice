#include <stdio.h>

int main(void) {
	int howMany = 0;
	int numRead = 0;
	int sum = 0;

	printf("How many numbers do you want to add?\n");
	scanf_s("%d", &howMany);

	for(int i = 0; i < howMany; i++) {
		printf("Enter number to add:\n");
		scanf_s("%d", &numRead);
		printf("You entered %d\n", numRead);
		sum += numRead;
		printf("Your current total is: %d\n", sum);
	}
	
	printf("Your final total is: %d\n", sum);
	return 0;
}
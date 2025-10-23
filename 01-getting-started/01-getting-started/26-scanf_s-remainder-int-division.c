#include <stdio.h>

int main(void) {
	int firstNum;
	int secondNum;

	scanf_s("%d %d", &firstNum, &secondNum);

	int division = firstNum / secondNum;
	int remainder = firstNum % secondNum;

	printf("%d\n%d", division, remainder);

	return 0;
}
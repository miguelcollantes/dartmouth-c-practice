#include <stdio.h>

int main(void) {
	int num;
	int red;
	int yellow;
	int green;
	int sum = 0;
	double avg;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf_s("%d %d %d", &red, &yellow, &green);
		sum += (red + yellow * 10 + green * 100);
		avg = (double)sum / (i + 1);
		printf("%d. you rolled: %d%d%d, current average: %.1lf\n", i + 1, green, yellow, red, avg);
	}

	return 0;
}
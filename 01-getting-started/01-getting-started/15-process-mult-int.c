#include <stdio.h>

int main(void) {
	int enginePower = 0;
	int resistance = 0;
	int weight = 0;
	int height = 0;
	int numRobots = 0;
	int sum = 0;

	printf("How many robots to deploy? \n");
	scanf_s("%d", &numRobots);

	for (int i = 0; i < numRobots; i++) {
		int powerRating;
		printf("For robot number %d, enter the height, weight, engine power, and resistance rating of the robot with no commas:\n", i + 1);
		scanf_s("%d%d%d%d", &height, &weight, &enginePower, &resistance);
		printf("You entered:\n");
		printf("Height: %d\n", height);
		printf("Weight: %d\n", weight);
		printf("Engine Power: %d\n", enginePower);
		printf("Resistance: %d\n", resistance);
		powerRating = (enginePower + resistance) * (weight - height);
		printf("Robot number %d power level: %d\n", i + 1, powerRating);
		sum += powerRating;
	}
	printf("Total Power Rating: %d\n", sum);
}
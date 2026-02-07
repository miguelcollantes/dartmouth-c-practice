#include <stdio.h>
// #include <stdlib.h>

struct student {
	char firstName[15];
	char lastName[15];
	int birthYear;
	double avgGrade;
};

struct date {
	int year;
	int month;
	int day;
};

int main(void) {
	struct student john = { "John", "Doe", 2000, 2.7 };
	struct student jane = { "Jane", "Deer", 2001, 2.8 };
	struct date today = { 2026, 02, 02 };

	printf("Names: %s %s, %s %s\n", john.firstName, john.lastName, jane.firstName, jane.lastName);
	printf("Years of birth: %d, %d\n", john.birthYear, jane.birthYear);
	printf("GPAs: %.2lf, %.2lf\n", john.avgGrade, jane.avgGrade);
	printf("Today's date is: %d/%d/%d\n", today.month, today.day, today.year);

	// modifying and access structure
	struct student user;

	printf("\nWhat is you first name? ");
	scanf_s(" %s", user.firstName, 15);
	printf("What is your last name? ");
	scanf_s(" %s", user.lastName, 15);
	printf("What is your birth year? ");
	scanf_s(" %d", &user.birthYear);
	printf("What is your GPA? ");
	scanf_s(" %lf", &user.avgGrade);
	printf("\nYour account profile:\n\n");
	printf("First name: %s\n", user.firstName);
	printf("Last name: %s\n", user.lastName);
	printf("Birth year: %d\n", user.birthYear);
	printf("GPA: %.2lf\n", user.avgGrade);

	return 0;
}
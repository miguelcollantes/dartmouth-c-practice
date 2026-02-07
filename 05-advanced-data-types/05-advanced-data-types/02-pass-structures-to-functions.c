#include <stdio.h>
// #include <stdlib.h>

struct student {
	char firstName[30];
	char lastName[30];
	int birthYear;
	double gpa;
};

void printStudent(struct student);
void readStudent(struct student*);

int main(void) {
	// passing structures to functions directly
	struct student leader = { "John", "Doe", 2000, 3.81 };
	struct student scribe = { "Jane", "Deer", 2002, 3.92 };

	printf("These student structures are passed to functions directly:\n\n");
	printStudent(leader);
	printStudent(scribe);
	
	// passing structures to functions by pointer reference
	struct student user;

	readStudent(&user);
	printf("\nNew student profile:\n\n");
	printStudent(user);

	return 0;
}

void printStudent(struct student input) {
	printf("Name: %s %s\n", input.firstName, input.lastName);
	printf("Year of birth: %d\n", input.birthYear);
	printf("GPA: %.3lf\n\n", input.gpa);
}

void readStudent(struct student* p_input) {
	printf("Enter a new student record: \n\n");
	printf("First name: ");
	scanf_s(" %s", (*p_input).firstName, 30);
	printf("Last name: ");
	scanf_s(" %s", (*p_input).lastName, 30);
	printf("Year of birth: ");
	scanf_s(" %d", &(*p_input).birthYear);
	printf("GPA: ");
	scanf_s(" %lf", &(*p_input).gpa);
}
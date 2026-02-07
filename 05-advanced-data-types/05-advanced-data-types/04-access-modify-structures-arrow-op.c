#include <stdio.h>
// #incldue <stdlib.h>

struct student {
	char firstName[30];
	char lastName[30];
	int birthYear;
	double gpa;
};

void readStudent(struct student*);
void printStudent(struct student);

int main(void) {
	struct student user;
	
	readStudent(&user);
	printStudent(user);

	return 0;
}

void readStudent(struct student* p_input) {
	printf("Enter a new student record: \n\n");
	printf("First name: ");
	//scanf_s(" %s", (*p_input).firstName, 30);
	scanf_s(" %s", p_input->firstName,30);
	printf("Last name: ");
	// scanf_s(" %s", (*p_input).lastName, 30);
	scanf_s(" %s", p_input->lastName,30);
	printf("Year of birth: ");
	//scanf_s(" %d", &(*p_input).birthYear);
	scanf_s(" %d", &p_input->birthYear);
	printf("GPA: ");
	//scanf_s(" %lf", &(*p_input).gpa);
	scanf_s(" %lf", &p_input->gpa);
	}

	void printStudent(struct student student) {
		printf("\nStudent profile:\n\n");
		printf("Name: %s %s\n", student.firstName, student.lastName);
		printf("Year of birth: %d\n", student.birthYear);
		printf("GPA: %.3lf\n\n", student.gpa);
	}
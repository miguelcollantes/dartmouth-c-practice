/*
You would like to store student data (for each student, their name and
age) in a linked list of students. You are given the structure to store
each student's information. Do not modify the student structure.

Your first task is to write a function createStudent() that takes as
inputs a string (namely a student's name) and an integer (their age) and
that returns a pointer to a struct student which stores this
information. Your function should dynamically allocate the memory
required for this struct student and then write the student's name and
age into this newly allocated memory.

You are given the createStudent() function prototype and a main()
function to test your code. Do not modify them.

Examples

Input:
Petra 25

Output:
New student created: Petra is 25 years old.

-----
Input:
Remi 18

Output:
New student created: Remi is 18 years old.
*/

#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
    struct student* next;
};

struct student* createStudent(char studentName[], int studentAge);
void copyStr(char storeName[], char studentName[]);

int main(void) {
    struct student* studptr;
    int myAge;
    char myName[50];
    scanf_s("%s %d", myName, 50, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

    struct student* createStudent(char studentName[], int studentAge) {
        struct student* p_ptr = (struct student*)malloc(sizeof(struct student));

        copyStr(p_ptr->name, studentName);
        p_ptr->age = studentAge;
        p_ptr->next = NULL;

        return p_ptr;
    }

    void copyStr(char storeName[], char studentName[]) {
        int i = 0;
        while (studentName[i] != '\0') {
            storeName[i] = studentName[i];
            i++;
        }
        storeName[i] = '\0';
    }
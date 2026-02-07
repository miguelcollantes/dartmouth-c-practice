/*
In this problem you will continue developing the data feature which you
started implementing in the previous problem. You will implement a
"tomorrow" feature in the C programming language via a function called
"advanceDay()". The function advanceDay() should take as input a date
(stored in a struct date) and return the date of the following day. You
do not have to take into account leap years (although you may if you
wish to). That is, it is okay for your function to always return March 1
as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main
function as well as the function prototypes for the readDate(), printDat
(), and advanceDay() functions. Do not modify any of the given code.
Simply add your function definitions underneath the main() function. For
the readDate() and printDate() functions you may simply copy and paste
the code you developed in the previous task.



Examples

Input:
2018 10 2

Output:
10/02/2018

10/03/2018
----------
Input:
2018 10 31

Output:
10/31/2018

11/01/2018
----------
Input:
2018 11 30

Output:
11/30/2018

12/01/2018
----------
Input:
2018 12 31

Output:
12/31/2018

01/01/2019
*/

#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date*);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date* date) {
	scanf_s(" %d", &date->year);
	scanf_s(" %d", &(*date).month);
	scanf_s(" %d", &date->day);
}

void printDate(struct date date) {
	printf("%02d/%02d/%04d\n\n", date.month, date.day, date.year);
}

struct date advanceDay(struct date date) {
	if ((date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10) && date.day == 31) {
		date.month++;
		date.day = 1;
	}

	else if (date.month == 2 && date.day == 28) {
		date.month++;
		date.day = 1;
	}

	else if ((date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11) && date.day == 30) {
		date.month++;
		date.day = 1;
	}

	else if (date.month == 12 && date.day == 31) {
		date.year++;
		date.month = 1;
		date.day = 1;
	}

	else {
		date.day++;
	}

	return date;
}
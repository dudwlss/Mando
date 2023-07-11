#define _CPR_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s;

	s.number = 202032058;
	strcpy(s.name, "황영진");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2f\n", s.grade);

	return 0;
}

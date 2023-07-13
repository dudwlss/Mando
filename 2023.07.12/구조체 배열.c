#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUDENTS 20

struct Student {
    int midterm;    
    int final;    
    int assignment; 
    int total;      
    int rank;      
};

int RandomScore(int max) {
    return rand() % (max + 1);
}

void TotalScore(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].total = students[i].midterm + students[i].final + students[i].assignment;
    }
}

void Rank(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rank = 1;
        for (int j = 0; j < numStudents; j++) {
            if (students[j].total > students[i].total) {
                students[i].rank++;
            }
        }
    }
}

int main() {
    
    srand(time(NULL));

    struct Student students[NUM_STUDENTS];
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].midterm = RandomScore(40);
        students[i].final = RandomScore(30);
        students[i].assignment = RandomScore(30);
    }

    TotalScore(students, NUM_STUDENTS);
    
    Rank(students, NUM_STUDENTS);
    
    printf("성적 처리 결과:\n");
    printf("번호\t중간\t기말\t과제\t총점\t석차\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, students[i].midterm, students[i].final,
            students[i].assignment, students[i].total, students[i].rank);
    }

    return 0;
}

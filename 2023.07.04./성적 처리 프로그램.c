#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int s[20][6];
    int i, j;

    for (i = 0; i < 20; i++) {
        s[i][0] = rand() % 51;
        s[i][1] = rand() % 31;
        s[i][2] = rand() % 21;
        s[i][3] = s[i][0] + s[i][1] + s[i][2];
        }

    for (i = 0; i < 20; i++) {
        s[i][4] = 1;
        for (j = 0; j < 20; j++) {
            if (s[i][3] < s[j][3])
            s[i][4]++;
    }
}

    printf("번호 중간 기말 과제 총점 등수\n");
    printf("-------------------------------\n");
    for (i = 0; i < 20; i++) {
        printf("%4d ", i + 1);
        for (j = 0; j < 4; j++)
            printf("%4d ", s[i][j]);
        printf("%4d\n", s[i][4]);
    }
}

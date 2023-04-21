#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;
    int sum = 0;

    for(i = 10; i <= 30; i++) {
        for(j = 0; j <= 5; j++) {
            sum += i + j;
        }
    }

    printf("%d", sum);

    return 0;
}

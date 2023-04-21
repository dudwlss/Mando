#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int f0 = 0, f1 = 1, f;
    int n, i;

    printf("몇 개의 항을 출력할까요? ");
    scanf("%d", &n);

    printf("%d %d ", f0, f1);

    for(i = 2; i < n; i++) {
        f = f0 + f1;
        printf("%d ", f);
        f0 = f1;
        f1 = f;
    }

    return 0;
}

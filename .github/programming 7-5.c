#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, i = 0, j;

    do {
        printf("정수를 입력하세요: ");
        scanf("%d", &num);
    } while(num < 0);

    while(num != 0) {
        j = num % 10;
        i = i * 10 + j;
        num /= 10;
    }

    printf("숫자를 반대로 출력: %d", i);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, i;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    printf("%d의 약수: ", num);
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

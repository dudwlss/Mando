#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("%d가 가장 작습니다.", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%d가 가장 작습니다.", num2);
    } else {
        printf("%d가 가장 작습니다.", num3);
    }

    return 0;
}

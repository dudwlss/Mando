#include <stdio.h>

int main() {
    int number;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    printf("%d의 약수: ", number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

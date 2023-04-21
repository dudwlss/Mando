#include <stdio.h>

int main() {
    int i, j;
    int n;

    printf("2와 100 사이의 소수: ");
    for(i = 2; i <= 100; i++) {
        n = 1;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                n = 0;
                break;
            }
        }
        if(n == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

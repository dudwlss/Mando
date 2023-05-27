#include <stdio.h>

double factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double calculate_euler() {
    double euler = 1.0;
    int i;

    for (i = 1; i <= 10; i++) {
        euler += 1.0 / factorial(i);
    }

    return euler;
}

int main() {
    double euler_number = calculate_euler();

    printf("오일러의 수 (e): %lf\n", euler_number);

    return 0;
}

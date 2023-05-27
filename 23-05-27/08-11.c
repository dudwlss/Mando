#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand() {
    return (double)rand() / RAND_MAX; =
}

int main() {
    int i;
    
    srand(time(NULL));  =
    
    for (i = 0; i < 5; i++) {
        double random_value = f_rand();
        printf("난수 %d: %lf\n", i + 1, random_value);
    }
    
    return 0;
}

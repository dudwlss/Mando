#include <stdio.h>
#include <math.h>

double sin_degree(double degree) {
    double radian = degree * M_PI / 180;  
    return sin(radian); 
}

int main() {
    double degree;
    
    printf("각도를 입력하세요: ");
    scanf("%lf", &degree);
    
    double result = sin_degree(degree);
    
    printf("각도: %lf도, 사인 값: %lf\n", degree, result);
    
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  
  float x = 0;
  printf("실수값을 입력하시오 : ");
  scanf("%f", &x);

   if (x <= 0) {
    x = (x * x) + (- 9 * x) + 2;
    printf("x의 값은 %f", x);
  } 
  else if (x > 0) {
    x = (7 * x) + 2;
    printf("x의 값은 %f", x);
  }
  
  return 0;
}

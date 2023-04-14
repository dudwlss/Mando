#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x, y, z, min = 0;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y) {
		min = y;
  }  
	else if (y > x) {
		min = x;
  }
	if (z < min) {
		min = z;
  }
	printf("가장 작은 정수는 %d 입니다.", min);

	return 0;
}

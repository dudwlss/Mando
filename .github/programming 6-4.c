#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

	srand((unsigned int)time(NULL));
	
	int x;
	int y = (rand() % 3 + 1);

	printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
	scanf("%d", &x);

	if (y == 1) {
		printf("컴퓨터는 가위를 선택하였습니다.\n");
  }
	else if (y == 2) {
		printf("컴퓨터는 바위를 선택하였습니다.\n");
  }
	else if (y == 3) {
		printf("컴퓨터는 보를 선택하였습니다.\n");
  }
	if (x == y) {
		printf("비겼습니다.\n");
  }
	else if ((x == 2 && y == 1) || (x == 1 && y == 3) || (x == 3 && y == 2))
		printf("사용자가 이겼습니다.\n");
	else if ((x == 1 && y == 2) || (x == 3 && y == 1) || (x == 2 && y == 3))
		printf("사용자가 졌습니다.\n");
	
	return 0;
}

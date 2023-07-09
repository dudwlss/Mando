#include <stdio.h>

int main(void) {
	int i, j, x = 0;
	int cnt = 0;
	int y = -1;
	int f = 1;
	int n = 5;
	int a[5][5];

	while (n > 0) {
		for (i = 0; i < n; i++) {
			y += f;
			a[x][y] = ++cnt;
		}
		n--;
		for (i = 0; i < n; i++) {
			x += f;
			a[x][y] = ++cnt;
		}
		f *= -1;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}

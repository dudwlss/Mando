#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void print_image(int image[SIZE][SIZE]) {
   int r, c;
   for (r = 0; r < SIZE; r++) {
      for (c = 0; c < SIZE; c++) {
         printf("%2d ", image[r][c]);
      }
      printf("\n");
   }
   printf("\n");
}
void random_image(int image[SIZE][SIZE]) {
   int r, c;
   int i = 0;
   int count = 0;


   while (1) {
      r = rand() % 5;
      c = rand() % 5;
      if (image[r][c] == 0) {
         image[r][c] = i;
         i++;
      }
      if (i >= 25) {
         break;
      }
      count++;
   }
   printf("반복된 수 : %d\n", count);
}

int main(void) {
   int image[SIZE][SIZE] = { 0 };
   
   srand((unsigned)time(NULL));
   random_image(image);
   print_image(image);
   return 0;
}

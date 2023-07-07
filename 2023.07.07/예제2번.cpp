#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sol_arrayA(int a[]);
void sol_arrayB(int b[]);
void abs_array(int a[], int b[], int c[], int size);
void overlapc(int a[], int b[]);

int main(void) {
    srand((unsigned)time(NULL));

    int a[10];
    int b[10];
    int c[20];
    int i, j, size;
    int n = 1;

    printf("A = ");
    for (i = 0; i < 10; i++) {
        a[i] = rand() % 100;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) i--;
        }
    }

    sol_arrayA(a);

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("B = ");
    for (i = 0; i < 10; i++) {
        b[i] = rand() % 100;
        for (j = 0; j < i; j++) {
            if (b[i] == b[j]) i--;
    }

    sol_arrayB(b);

    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    abs_array(a, b, c, 20);
   
    printf("C = ");
    for (i = 0; i < 20; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}

    void sol_arrayA(int a[]); {
    int i, j, temp, min;
    for (i = 0; i < 10; i++) {
        min = i;
        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
    void sol_arrayB(int b[]); {
    int i, j, temp, min;
    for (i = 0; i < 10; i++) {
        min = i;
        for (j = i + 1; j < 10; j++) {
            if (b[j] < b[min]) {
                min = j;
            }
        }
        temp = b[i];
        b[i] = b[min];
        b[min] = temp;
    }
}
    void abs_array(int a[], int b[], int c[], int size); {
    int j = 0;
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (j < size / 2 && k < size / 2) {
            if (a[j] < b[k]) {
                c[i] = a[j++];
            }
            else {
                c[i] = b[k++];
            }
        }
        else if (j == size / 2) {
            c[i] = b[k++];
        }
        else if (k == size / 2) {
            c[i] = a[j++];
        }
    }
}


#include <stdio.h>
// функция сортировки из 7-ой лабораторной работы

void sortirovka(int a[], int c) {
    int i;
    int j;
    for (i = 0; i < c - 1; i++) {
        for (j = 0; j < c - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {4, 2};
    int c = 3;
    sortirovka(a, c);
    for (int i = 0; i < c; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
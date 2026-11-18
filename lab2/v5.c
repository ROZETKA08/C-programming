#include <stdio.h>
#include <math.h>

int main() {
        int s = 0;
        int a;
        printf("Введите число a: ");
        scanf("%d", &a);
        for (int n = 2; n<a; n++) {if (a%n != 0) {s++;}}
        if (s == 0) {puts("1");}
        else {puts("0");}
        return 0;
}


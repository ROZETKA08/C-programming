#include <stdio.h>
#include <math.h>

int main() {
        int n;
        long s;
        int i;
        printf("Введите число n: ");
        scanf("%d", &n);
        for (s = 1, i = 1; i <= n; i++) {
                s = s * i;
        }
        printf("факториал равен: %ld\n", s);
        return 0;
}



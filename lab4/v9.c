#include <stdio.h>

void p_b(int a) {
    for (int i = sizeof(a) * 8 - 1; i >= 0; i--) {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");
}

int print_bin(int a) {
        int res = 0;
	for (int i = 0; i <= sizeof(a)*8 - 1; i++) {
		res <<= 1;
                res |= (a & 1);
                a >>= 1;
        }
	return("%d\n", res);
}

int main() {
        int a;
        int z = 0;
        printf("Введите целое число: ");
        scanf("%d", &a);
        printf("исходное число в 2ичном виде: ");
        p_b(a);
        printf("результат в 2ичном виде: ");
        z = print_bin(a);
        p_b(z);
        return 0;
}
#include <stdio.h>

void print_bin(int a) {
	for (int i = sizeof(a)*8 - 1; i >= 0; i --) {
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}

int sdvig_vlevo(int a, int k) {
	int sdvig = (1 << k) - 1;
	return (a << k) || sdvig;
}

int main() {
	int a = 0;
	int k = 0;
	printf("Введите целое число: ");
	scanf("%d", &a);
	printf("Введите на сколько позиций влево сдвинуть все биты: ");
        scanf("%d", &k);
	int res1 = sdvig_vlevo(a,k);
	print_bin(res1);
	return 0;
}
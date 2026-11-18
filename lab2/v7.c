#include <stdio.h>
#include <math.h>

int main() {
        int n = 2;
        int flag = 0;
	int a;
        printf("Введите число a: ");
        scanf("%d", &a);
        while (a%n != 0) {
		n++;
		if (n == a) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		puts("1");
	}
	else {
		puts("0");
	}
        return 0;
}









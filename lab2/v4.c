#include <stdio.h>
#include <math.h>

int main() {

        // №4
	int n;
	int a;
	printf("Ввкдите число a: ");
	scanf("%d", &a);
	for (n = 2; n<a; n++) {
		if (a%n == 0) {
			break;
		}
	}
	if (n == a) {
		 puts("1");
	}
	else  {
		puts("0");
	}
	return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
	float x;
	float y;
	printf("Введите координаты точки через пробел:");
	scanf("%f %f", &x, &y);
	if ((y <= 2*x + 3) && (y <= (-(1.0/3.0))*x + (2.0/3.0)) && (y >= 0.25*x - 0.5))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}

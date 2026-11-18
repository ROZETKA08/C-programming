	#include <stdio.h>

int main()
{
	int a;
	printf("Введите год:");
	scanf("%d", &a);
	if (a % 400 == 0) 
	{
		printf("%d - год високосный\n", a);
	}
	else if (a % 100 == 0) 
	{
		printf("%d - год не високосный\n", a);
	}
	else if (a % 4 == 0)
	{
		printf("%d - год високосный\n", a);
	}
	else 
	{
		printf("%d - год не високосный\n", a);
		return 0;
	}
}
	

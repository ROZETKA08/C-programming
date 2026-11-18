#include <stdio.h>

int main()
{
	float c;
	char b;
	printf("Input temperature:");
	scanf("%f%c", &c, &b);
	if (b == 'C' || b == 'c')
	{
		printf("Output temperature: %ff\n", (c*1.8)+32);
	}
	else if (b == 'F' || b == 'f')
	{ 
		printf("Output temperature: %f c\n", (c-32)*(5.0/9.0));
	}
	else
	{
		printf("Output error\n");
		return 0;
	}
}
	

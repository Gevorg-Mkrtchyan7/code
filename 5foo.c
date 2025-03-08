#include <stdio.h>

int main()
{
	int C = 0;
	int F = 0;
	printf("Enter the Celsius \n");
	scanf("%d", &C);
	F = C * (9 / 5) + 32;
	printf("it's %d in Fahrenheit \n", F);
}

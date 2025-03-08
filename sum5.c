#include <stdio.h>

int main()
{
	float x = 0, y = 0;
	printf("input an number x \n");
    	scanf("%f", &x);
	printf("input an number y \n");
	scanf("%f", &y);
	float res = (x + y) / 2;
	printf("average of %.1f and %.1f = %.1f \n", x, y, res);
}

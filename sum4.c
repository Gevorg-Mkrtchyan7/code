#include <stdio.h>

int main()
{
	int x;
	printf("what is x? \n");
	scanf("%d", &x);
	int res = 4 * x + 21 * x * x + 12;
	printf("result is %d \n", res);
}

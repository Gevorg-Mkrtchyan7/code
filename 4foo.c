#include <stdio.h>

int main()
{
	int length = 0;
	int width = 0;
	printf("Enter the length of rectangle");
	scanf("%d", &length);
	printf("Enter the width of rectangle");
	scanf("%d", &width);
	
	int res = length * width;
	printf("The area of rectangle is %d \n", res);
}

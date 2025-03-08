#include <stdio.h>

int main() 
{
	int sec = 0;
	
	do {
	printf("Enter the seconds \n");
	scanf("%d", &sec);
	} while (sec < 0);

	int hours = sec / 3600;
	int min = sec / 60;
	
	printf("hour = %d   minute = %d   secound = %d \n", hours, min, sec);
	
	return 0; 
}

#include <stdio.h>

int main () 
{
	int days = 0;
	do {
	printf("Enter the days \n");
	scanf("%d", &days);
	} while (days < 0);
	
	int years = days / 365;
	int weeks = days / 7;

	printf("years = %d   weeks = %d   days = %d \n", years, weeks, days);  	

	return 0;
}

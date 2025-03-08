# include <stdio.h>

int main() {
	int days = 0;
	do {
	printf("Enter the days \n");
	scanf("%d", &days);
	} while (days < 0);

	int years = days / 365;
	int months = days / 30;

	printf("year = %d   month = %d   day = %d \n", years, months, days);
	
	return 0;
}

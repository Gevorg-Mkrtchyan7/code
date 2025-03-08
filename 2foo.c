#include <stdio.h>

int main()
{
	char letter = 'a';
	
	do{
	printf("Enter uppercase letter \n");
	scanf(" %c", &letter);
	}while(letter < 65 || letter > 90);
	
	letter = letter + 32;
	printf("The result is %c \n", letter);
}

#include <stdio.h>

int main()
{
	char letter = 'a';
	do{
	printf("Enter the lowercase \n");
	scanf(" %c", &letter);
	}while (letter < 97 || letter > 122);
	
	letter = letter - 32;
	printf("The result is %c \n", letter); 
} 

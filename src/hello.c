#include <stdio.h>
#include "espl_lib.h"

char repeat;
unsigned int number;
char* word;

int main()
{
	char repeat = 'y';
	printf("Hello ESPL!");

	while(repeat == 'y' || repeat == 'Y')
	{
		printf("\nPlease enter a number here: ");
		scanf(" %u", &number);

		word = num_to_words(number);
		printf("You entered a number: %s", word);

		printf("\nDo you want to enter another number? (y/n) ");
		scanf(" %c", &repeat);
	}
	return 0;
}

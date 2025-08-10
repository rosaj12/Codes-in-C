
/* WHILE OPERATOR */

#include <stdio.h>

int main()
{
	/* A variable with some especific numbers */
	int numbers = 12345;
	/* A variable to store the reversed number */
	int revNumbers = 0;
	
	/* Reverse and reorder the numbers */
	while(numbers) {
		/* Get the last number of 'numbers' and add it to 'revNumber' */
		revNumbers = revNumbers * 10 + (numbers % 10);
		
		/* Remove the last number of 'numbers' */
		numbers /= 10;
	}
	
	printf("Reverted Number: %d", revNumbers);
	
	return 0;
}

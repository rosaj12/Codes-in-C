
/* STRING INPUT - scanf() */

#include <stdio.h>

int main()
{
	/* Create an String */
	char firstName[30];
	
	/* Ask the user to input some text */
	printf("Enter your first name: \n");
	
	/* Get and save the text the user types */
	scanf("%s", firstName);
	
	/* Output the text the user typed */
	printf("Hello %s", firstName);
	
	return 0;
}

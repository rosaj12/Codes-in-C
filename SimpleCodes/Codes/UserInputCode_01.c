
/* USER INPUT */

#include <stdio.h>

int main()
{
	/* Create an int variablr that will store the number we 
		get from the user */
	int myNum;
	
	/* Ask the user to type a number */
	printf("Type a number: \n");
	
	/* Get and save th number the user types */
	scanf("%d", &myNum);
	
	/* Output the number the user typed */
	printf("Your number is: %d", myNum);
	
	return 0;
}

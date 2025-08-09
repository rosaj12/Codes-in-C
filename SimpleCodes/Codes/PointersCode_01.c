
/* CREATING POINTERS */

#include <stdio.h>

int main()
{
	/* An int variable */
	int myAge = 12;
	
	/* A pointer variable, with the name ptr, that stores the adress
		of myAge */
	int* ptr = &myAge;
	
	/* Outputs the value of my Age(12) */
	printf("%d\n", myAge);
	
	/* Outputs the memory adress of myAge */
	printf("%p\n", &myAge);
	
	/* Output the memory adress of myAge with the pointer */
	printf("%p\n", ptr);
	
	return 0;
}


/* MATH OPERATIONS */

#include <stdio.h>
#include <math.h>

/* Declare Functions */
void mathOperations();

/* Define Functions */
void mathOperations(){
	printf("Square Root: %.2f\n", sqrt(16));
	printf("Round of an int: %.2f\n", ceil(1.4));
	printf("Round of a float: %.2f\n", floor(1.4));
	printf("Power: %.2f\n", pow(4, 3));
}

/* Main */
int main()
{
	mathOperations();
	
	return 0;
}

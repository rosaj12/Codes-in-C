
/* SET ARRAY SIZE */

#include <stdio.h>

int main()
{
	/* Declare an array of 4 int */
	int myNumbers[4], i;
	
	/* Add Elements */
	myNumbers[0] = 12;
	myNumbers[1] = 25;
	myNumbers[2] = 35;
	myNumbers[3] = 42;
	
	for(i = 0; i < 4; i++){
		printf("%d\n", myNumbers[i]);
	}
	
	return 0;
}

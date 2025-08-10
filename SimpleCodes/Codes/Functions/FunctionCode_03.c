
/* PASS ARRAYS AS FUNCTION PARAMETERS */

#include <stdio.h>

void myFunction();

int myNumbers[5] = {10, 20, 30, 40, 50};

/* Creating a Function */
void myFunction(int myNumbers[5]){
	int i;
	for(i = 0; i < 5; i++){
		printf("%d\n", myNumbers[i]);
	}
}

int main()
{
	/* Call the Function */
	myFunction(myNumbers);
	
	return 0;
}


/* CALL A FUNCTION */

#include <stdio.h>

void myFunction();

/* Creating a Function */
void myFunction(){
	printf("I just got Executed!\n");
}

int main()
{
	/* Call the Function */
	myFunction();
    myFunction();
    myFunction();

	return 0;
}


/* FUNCTIONS CALLING OTHER FUNCTIONS */

#include <stdio.h>

/* Declare 2 Functions */
void myFunction();
void myOtherFunction();

/* Define 2 Functions */
void myFunction(){
	printf("Some text in myFunction()\n");
	myOtherFunction();
}

void myOtherFunction() {
	printf("Some text in myOtherFunction()\n");
}

/* Main */
int main()
{
	/* Call myFunction() */
	myFunction();
	
	return 0;
}

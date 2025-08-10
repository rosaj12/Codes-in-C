
/* GLOBAL SCOPE */

#include <stdio.h>

int x = 7;

void myFunction();

/* Create a Function */
void myFunction(){	
	/* Print the Variable 'x' */
	printf("%d\n", x);
}

/* Main */
int main()
{
	myFunction();
	printf("%d", x);
	
	return 0;
}

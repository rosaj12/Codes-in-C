
/* LOCAL SCOPE */

#include <stdio.h>

void myFunction();

/* Create a Function */
void myFunction(){
	/* Local Variable the belongs to myFunction */
	int x = 7;
	
	/* Print the Variable 'x' */
	printf("%d", x);
}

/* Main */
int main()
{
	myFunction();
	
	return 0;
}

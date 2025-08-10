
/* RETURN VALUES */

#include <stdio.h>

int myFunction();

/* Creating a Function */
int myFunction(int x){
	return 5 * x;
}

int main()
{
	printf("%d", myFunction(5));
	
	return 0;
}


/* STRING INPUT */

#include <stdio.h>
#include <string.h>

int main()
{
	/* Create an String */
	char fullName[30];
	
	/* Ask the user to input some text */
	printf("Type your name: \n");
	fgets(fullName, sizeof(fullName), stdin);
	
	/* Output the text the user typed */
	printf("Hello %s", fullName);
	
	return 0;
}

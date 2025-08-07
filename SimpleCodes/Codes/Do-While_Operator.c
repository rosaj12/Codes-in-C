
/* DO-WHILE OPERATOR */

#include <stdio.h>

int main()
{
	int number;
	
	do {
		printf("Enter a natural number: ");
		scanf("%d", &number);
	} while(number >= 0);
	
	return 0;
}

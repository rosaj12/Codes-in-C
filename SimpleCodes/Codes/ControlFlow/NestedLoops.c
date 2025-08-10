
/* FOR OPERATOR */

#include <stdio.h>

int main()
{
	int i, j;
	
	/* Outer Loop */
	for (i = 0; i <= 10; i++){
		/* Inner Loop */
		for(j = 0; j <= 10; j++){
			printf("%d*%d =\t%d\n", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}

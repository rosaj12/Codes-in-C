
/* GET ARRAY SIZE OR LENGHT */

#include <stdio.h>

int main()
{
	int myNumbers[] = {10, 25, 50, 75, 100}, i;
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
	
	for(i = 0; i < length; i++) {
		printf("%d\n", myNumbers[i]);
	}
	
	return 0;
}


/* GET ARRAY SIZE OR LENGHT */

#include <stdio.h>

int main()
{
	int myNumbers[] = {10, 25, 50, 75, 100};
	
	printf("%zu", sizeof(myNumbers));
	/* Prints 20 because of 'sizeof' returns the size of type in 'bytes'.
		An int is usually 4 bytes, therefore(4 bytes * 5 elements) = 20 bytes */
	
	return 0;
}


/* POINTERS & ARRAYS */

#include <stdio.h>

int main()
{
	int myNumbers[4] = {12, 25, 42, 70};
	int *ptr = &myNumbers;
	int i;
	
	for(i = 0; i < 4; i++) {
		printf("%d : %p : %d\n", myNumbers[i], &myNumbers[i], *(ptr + i));
	}
	
	printf("\n");
	printf("%zu", sizeof(myNumbers));
	
	return 0;
}

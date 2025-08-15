
/* RECURSION */

#include <stdio.h>

/* Declare Functions */
int fatorial(int k);

/* Define Functions */
int fatorial(int k) {
	if (k > 0) {
		return k * fatorial(k - 1);
	} else {
		return 1;
	}
}

/* Main */
int main()
{
	int result = fatorial(10);
	printf("%d", result);
	
	return 0;
}

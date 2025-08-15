
/* CALL A FUNCTION */

#include <stdio.h>

void calculate();

/* Creating a Function */
void calculate(int x, int y){
	int sum = x + y;
	printf("%d + %d = %d\n", x, y, sum);
}

int main()
{
	/* Call the Function */
	calculate(5, 3);
	calculate(12, 15);
	calculate(15, 21);
	
	return 0;
}

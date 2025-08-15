

#include <stdio.h>

/* print Fahrenheit-Celisus table
	for fahr = 0, 10, ..., 300; floating-point version*/
	
int main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0; /* Lower limit of the Temperature Scale */
	upper = 300; /* Upper limit */
	step = 10; /* Step size */
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		
		printf("%3.0f\t %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
			
	return 0;
}


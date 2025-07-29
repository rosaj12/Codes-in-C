
#include <stdio.h>

#define lower 0
#define upper 300
#define step 10

/* print Fahrenheit-Celisus table
	for fahr = 0, 10, ..., 300; floating-poit version*/
	
int main()
{
	float fahr, celsius;	

	for(fahr = lower; fahr <= upper; fahr = fahr + step) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		
		printf("%3.0f\t %6.1f\n", fahr, celsius);
	}
			
	return 0;
}

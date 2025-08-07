
#include <stdio.h>

#define lower 0
#define upper 300
#define step 5

/* print Fahrenheit-Celisus table
	for fahr = 0, 5, ..., 300; floating-poit version*/
	
int main()
{
	float fahr, celsius;	

	for(fahr = lower; fahr <= upper; fahr += step) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		
		printf("%.1f\t %.1f\n", fahr, celsius);
	}
			
	return 0;
}

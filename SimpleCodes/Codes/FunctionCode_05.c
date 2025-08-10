
/* FUNCTION TO CONVERRT FAHRENHEIT TO CELSIUS */

#include <stdio.h>

float toCelsius(float fahr);

/* Create a Function */
float toCelsius(float fahr){
	return (5.0/9.0) * (fahr - 32.0);
}

/* Main */
int main()
{
	/* Set a fahrenheit value */
	float fahr_value = 90.2;
	
	/* Call the function with the fahrenheit value */
	float result = toCelsius(fahr_value);
	
	/* Print the fahrenheit value and the result in Celsius */
	printf("Fahrenheit: %.2f\nCelsius: %.2f\n", fahr_value, result);
	
	return 0;
}

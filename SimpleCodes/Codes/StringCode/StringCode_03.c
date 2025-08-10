
/* LOOP THROUGH A STRING */

#include <stdio.h>

int main()
{
	char carName[] = "McLaren";
	int length = sizeof(carName) / sizeof(carName[0]);
	int i;
	
	for(i = 0; i < length; ++i) {
		printf("%c\n", carName[i]);
	}
	
	return 0;
}

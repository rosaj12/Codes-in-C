
/* LOOP THROUGH A STRING */

#include <stdio.h>

int main()
{
	char carName[] = "McLaren";
	int i;
	
	for(i = 0; i < 7; ++i) {
		printf("%c\n", carName[i]);
	}
	
	return 0;
}

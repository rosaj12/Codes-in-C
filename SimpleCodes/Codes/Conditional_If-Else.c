
/* CONDITIONAL IF-ELSE */

#include <stdio.h>

int main()
{
	int x = 10, y = 12;
	
	if(x > y) {
		printf("X is Greater than Y");
	} else if (x < y) {
		printf("Y is Greater than X" );
	} else if (x == y) {
        printf("X is Equal to Y");
    } else if (x != y) {
        printf("X is Not Equal to Y");
    } else if (x <= y) {
        printf("X is Less than or Equal to Y");
    } else if (x >= y) {
        printf("X is Greater than or Equal to Y");
    } else {
        printf("No condition matched");
    }
    
	
	return 0;
}

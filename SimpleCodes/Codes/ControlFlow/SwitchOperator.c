
/* SWITCH OPERATOR */

#include <stdio.h>

int main()
{
	int day = 4;
	
	switch(day)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
	default:
		break;
	}
    
	return 0;
}

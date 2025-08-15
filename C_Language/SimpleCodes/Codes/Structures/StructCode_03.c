
#include <stdio.h>

struct Car {
	char brand[50];
	int year;
};

int main()
{
	struct Car car = {"Ferrari", 2020};	

	// Declare a pointer to the struct
	struct Car *ptr = &car;

	// Access members using the -> operator
	printf("Brand: %s\nYear: %d\n", ptr->brand, ptr->year);
    
	return 0;
}

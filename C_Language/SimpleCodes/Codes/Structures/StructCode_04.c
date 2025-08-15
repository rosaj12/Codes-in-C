
#include <stdio.h>

struct Car {
	char brand[50];
	int year;
};

// Function that takes a pointer to Car struct and updates the year
void updateYear();

void updateYear(struct Car *c) {
	// Change the year
	c->year = 2025;
}

int main()
{
	struct Car myCar = {"Ferrari", 2020};	
	// Declare a pointer to the struct
	
	/* Pass the pointer so the function can change the year */
	updateYear(&myCar);
	
	// Acess members using the ->operator
	printf("Brand: %s\nYear: %d\n", myCar.brand, myCar.year);
	
	return 0;
}



#include <stdio.h>

struct minhaEstrutura {
	int myNum;
	char myLetter;
};

int main()
{
	struct minhaEstrutura s1;
	s1.myNum = 13;
	s1.myLetter = 'B';
	printf("My Number: %d\n", s1.myNum);
	printf("My Letter: %c\n", s1.myLetter);
	return 0;
}


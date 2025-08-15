
#include <stdio.h>

struct minhaEstrutura {
	int myNum;
	char myLetter;
	char myString[30];
};

int main()
{
	struct minhaEstrutura s1 = {13, 'B', "Some Text"};
	printf("%d\n%c\n%s\n", s1.myNum, s1.myLetter, s1.myString);
	return 0;
}

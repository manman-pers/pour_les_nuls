#include <stdio.h>

int main()
{
	char a, b, c;
	char *p;

	p = &a;
	*p ='A';
	p = &b;
	*p = 'B';
	p = &c;
	*p = 'C';

	printf("Apprenez votre %c%c%c\n", a, b, c);

	return 0;
}

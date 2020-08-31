#include <stdio.h>

int main()
{
	int a;
	int *p;

	a = 12;
	p = &a;
	
	printf("La valeur de la la variable p est %d\n", *p);

	return 0;
}

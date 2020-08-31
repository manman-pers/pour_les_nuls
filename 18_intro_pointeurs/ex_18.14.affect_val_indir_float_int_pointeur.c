#include <stdio.h>

int main()
{
	int a;
	int *p;
	float b;
	float *q;

	p = &a;
	*p = 34;
	q = &b;
	*q = 45.6;

	printf("La valeur de a est %d et la velaur de B est %4.f\n", a, b);

	return 0;
}

#include <stdio.h>

int main()
{
	char c = 'c';
	int i = 54;
	double d = 0.45E79;
	float f = 34.56;

	printf("Adresse de 'c' %p\n", &c);
	printf("Adresse de i %p\n", &i);
	printf("Adresse de d %p\n", &d);
	printf("Adresse de f %p\n", &f);

	return 0;
}

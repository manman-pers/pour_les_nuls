#include <stdio.h>

void remise(float *a);

int main()
{
	float prixbase = 42.99;

	float *p;

	p = &prixbase;

	printf("L'article coute $%.2f\n", prixbase);
	remise(p);
	printf("Apres remise, l'article coute $%.2f\n", prixbase);

	return 0;
}

void remise(float *a)
{
	*a = *a * 0.50;
}

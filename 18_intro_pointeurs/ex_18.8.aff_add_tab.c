#include <stdio.h>

int main()
{
	int tab[5] = { 1, 2, 3, 4 };
	int i;

	for( i = 0; i < 5; i++)
	{
		printf("L'adresse de %d est %p\n", tab[i], &tab[i]);
	}

	return 0;
}

#include <stdio.h>

void create(int *tab[10]);

void jshow

int main()
{
	int a;
	create(&a);
	sjhow(&a);
	return 0;
	

}

void create(int *tab[10])
{

	*tab[10] = { 1, 6, 7, 2, 5, 3, 9, 8, 8, 6 };

}

void sjhow(int *tab[10])
{
	int x;
	x = 0;

	for( x = 0; x <10; x++)
	{
		printf("La valeur #%d vaut %d\n", x+1, tab[x]);
	}
}

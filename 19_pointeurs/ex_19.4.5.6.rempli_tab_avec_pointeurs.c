#include <stdio.h>

int main()
{
	int nombre[10];
	int x;
	int *p;

	p = nombre; /*Initialise le pointeur*/

	/*Remplit le tableau*/
	for(x = 0; x < 10; x++)
	{
		*p = x+1;
		p++;
	}
	
	/*Affiche tableau*/
	for(x = 0; x < 10; x++)
	{
		printf("Nombre[%d] vaut %d et l'adresse est %p\n", x + 1, nombre[x], p);
	}
	
	return 0;
}

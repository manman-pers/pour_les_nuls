#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *entrante;
	char *cpy_entrante;
	char n;
	char a, e, i, o, u, y;
		
	entrante = (char *)malloc(sizeof(char)*1024);
	cpy_entrante = (char *)malloc(sizeof(char)*1024);

	if(entrante == NULL)
	{
		puts("Allocation impossible");
		exit(1);
	}

	puts("Saisissez quelaue chose d'un peu long:");
	fgets(entrante, 1023, stdin);
	puts("Vous avez saisi :");
	printf("\"%s\"\n", entrante);

	for( n = 0; entrante[n] != '\n'; n++)
	{
		cpy_entrante[n] = entrante[n];
	}

	cpy_entrante[n] ='\n'; 

	printf("Chaine de caractere entree: %s", entrante);
        printf("Chaine de caractere copiee: %s", cpy_entrante);

	//nbc = strlen(cpy_entrante);

	for( n = 0; cpy_entrante[n] != '\n'; n++)
	{
		if(cpy_entrante[n] = a)
		{
				cpy_entrante[n] = '@'; 
		}
				printf("%c", cpy_entrante[n]);
	}

	//printf("La chaine de caractere sans le a est desormais : %s", cpy_entrante);	//
	

	
	return 0;
}

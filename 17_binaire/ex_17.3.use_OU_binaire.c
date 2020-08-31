#include <stdio.h>
#define SET 32

char *binbin(int n);

int main()
{
	int bor, resultat;

	printf("Indiquez une valeur entre 0 et 255: \n");
	scanf("%d", &bor);
	resultat = bor | SET;

	printf("\t%s\t%d\n", binbin(bor), bor);
	printf("|\t%s\t%d\n", binbin(SET), SET);
	printf("=\t%s\t%d\n", binbin(resultat), resultat);

	return 0;
}

char *binbin(int n)
{
	static char bin[9];
	int i;

	for( i = 0; i < 8; i++)
	{
		bin[i] = n & 0x80 ? '1' : '0';
		n <<= 1;
	}
	bin[i] = '\0';
	return (bin);
}

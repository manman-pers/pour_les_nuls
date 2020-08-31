#include <stdio.h>

int	main(int argc, char *argv[])
{
	struct	president
	{
		char name_pres[40];
		int nomi_year;
	};

       	struct president pres1 = { "George Washington", 1789 };
	struct president pres2 = { "John Adams", 1797 };

	printf("Le premier president est %s\n", pres1.name_pres);
	printf("Il a ete elu en %d\n", pres1.nomi_year);
	printf("Le deuxieme president est %s\n", pres2.name_pres);
	printf("Il a ete elu en %d\n", pres2.nomi_year);

	return 0;
}

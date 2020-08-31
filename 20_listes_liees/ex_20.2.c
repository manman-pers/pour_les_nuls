#include <stdio.h>
#include <stdlib.h>

int main()
{
	double *temp;
	int c = 1;

	temp = (double *)malloc(sizeof(float)*1);

	if (temp == NULL)
	{
		puts("Allocation memoire indisponible\n");
		exit(1);
	}

	printf("Quelle est la temperature exterieure?\n");
	scanf("%lf", temp);
	printf("La temperature entree est en Celsius (tapez 1) ou Fahrenheit (tapez 0)\n");
	scanf("%d", &c);
	
	if( c = 1)
	{
		*temp = *temp + 273.15;
		printf("La temperature exterieure en degres Kelvin est %f\n", *temp);
	}
	else
	{
		*temp = (*temp + 459.67) * (5.0/9.0);
		printf("La temperature exterieure en degres Kelvin est %f\n", *temp);
	}

	return 0;
}


#include <stdio.h>

int main()
{
	int a, b;
	float c;

	printf("Premier entier: \n");
	scanf("%d", &a);
	printf("Deuxieme entier: \n");
	scanf("%d", &b);

	c = (float)a/(float)b;

	printf("%d/%d = %.2f", a, b, c);

	return 0;
}

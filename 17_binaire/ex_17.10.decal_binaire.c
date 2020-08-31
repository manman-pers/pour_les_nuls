#include <stdio.h>

char *binbin(int n);

int main()
{
	int decalbin;
	int	x;

	printf("Indiquez une valeur en 0 et 65535\n");
	scanf("%d", &decalbin);

	for(x = 0; x < 16; x++)
	{
		printf("%s %d\n", binbin(decalbin), decalbin);
		decalbin = decalbin >> 1;
	}

	return 0;
}

char *binbin(int n)
{
	static char bin[17];
	int x;

	for (x = 0; x < 16; x++)
	{
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<= 1;
	}

	bin[x] = '\0';
	return(bin);
}


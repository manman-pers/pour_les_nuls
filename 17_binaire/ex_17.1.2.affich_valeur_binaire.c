#include <stdio.h>

char *binbin(int n);

int main()
{
	int input;

	printf("Indiquez une valeur entre 0 et 65535\n");
	scanf("%d", &input);
	printf("%d vaut %s en binaire\n", input, binbin(input));
	
	return 0;
}

char *binbin(int n)
{
	static char bin[17];
	int i;

	for(i = 0; i < 16; i++)
	{
		bin[i] = n & 0x800 ? '1' : '0';
		n <<= 1;
	}
	bin[i] = '\0';
	return(bin);
}

#include <stdio.h>

int main()
{
	char sample[] = "D'ou me viendra le secours?\n";
	
	/*int index = 0;*/

	char *psample;

	psample = sample;

	while(*psample)
	{
		putchar(*psample);
		*psample++;
	}

	return 0;
}

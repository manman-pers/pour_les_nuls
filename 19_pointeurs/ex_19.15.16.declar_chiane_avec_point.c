#include <stdio.h>

int main()
{
	char *sample = "D'ou me viendra le secours?\n";

	char save = *sample;

	while(putchar(*sample++));
	
	puts(sample);

	return 0;
}

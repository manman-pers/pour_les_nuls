#include <stdio.h>

int main()
{
	char abc[27];
	char *p;
	int x;

	p = abc;

	for(x = 0; x < 26; x++)
	{
		*p = x + 'A';			/* Les deux lignes combinees peuvent s'ecrire: '*p++ = x + 'A';' */
		putchar(*p);
		p++;
	}
	putchar('\n');

	return 0;
}


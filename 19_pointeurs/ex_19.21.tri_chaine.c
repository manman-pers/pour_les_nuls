#include <stdio.h>
#include <string.h>

int main()
{
	char *fruits[]= { "abricot", "banane", "ananas", "pomme", "kaki", "poire", "myrtille" };

	char *temp;
	int a, b, x;

	for(a = 0; a < 6; a++)
		for( b = a + 1; b < 7; b++)
			if(strcmp(*(fruits+a)) > strcmp(*(fruits+b)))
			{
				temp = *(fruits+a);
				*(fruits+a) = *(fruits+b);
				*(fruits+b) = temp;
			}
	for(x = 0; x < 7; x++)
	{
		puts(fruits[x]);
	}

	return 0;
}

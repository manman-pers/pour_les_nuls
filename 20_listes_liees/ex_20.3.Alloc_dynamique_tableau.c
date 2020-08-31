#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;

	int *tab = (int *)malloc(sizeof(int) * 3);

        if(tab == NULL)
        {
                printf("Allocation memoire indisponible\n");
                exit(1);
        }
	
	for( i = 0; i < 3; i++)
	{
		tab[i] = i * 100 + 100;
		printf("tab[%u] = %d\n", i, tab[i]);
	}

	return 0;
}

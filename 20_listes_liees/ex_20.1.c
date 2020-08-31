#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *age;

	age = (int *)malloc(sizeof(int)*1);
	
	if(age == NULL)
	{
		puts("Allocation memoire impossible");
		exit(1);
	}

	printf("Quel est votre age?\n");
	scanf("%d", age);
	printf("Vous avez %d ns\n", *age);
	return(0);
}

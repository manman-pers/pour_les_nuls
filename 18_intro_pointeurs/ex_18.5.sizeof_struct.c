#include <stdio.h>

int main()
{
	struct robot
	{
		int alive;
		char name[5];
		int xpos;
		int ypos;
		int strenght;
	};

	printf("La taille de la structure robot : %lu\n", sizeof(struct robot));

	return 0;
}

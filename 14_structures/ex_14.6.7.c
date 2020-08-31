#include <stdio.h>

int	main(int argc, char *argv[])
{
	struct scores
	{
		char player_name[100];
		int score_max;
	};
	struct scores player[4];
	struct scores temp;
	int i, j;

	for(i = 0; i < 4; i++)
	{
		printf("Indiquez le nom du joueur :\n");
		scanf("%s", player[i].player_name);
		printf("INdiquez le score max du joueur ;\n");
		scanf("%d", &player[i].score_max);
	}

	for(i = 0; i < 4; i++)
	{
		for(j = i + 1; j < 4; j++)
		{
			if(player[j].score_max > player[i].score_max)
			{
				temp = player[j];
				player[j] = player[i];
				player[i] = temp;
			}
		}
	}


	puts("Infos du joueur\n");
	printf("#\tNom\tScore\n");

	for(i = 0; i <4; i++)
	{
		printf("%d\t%s\t%5d\n", i+1, player[i].player_name, player[i].score_max);
	}

	return 0;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
	struct player
	{
		char name_player[32];
		int scoremax;
		float nb_hours_playing;
	};

	struct player xbox;

	printf("Nom du joueur :\n");
	scanf("%s", xbox.name_player);
	printf("Meilleur score: \n");
	scanf("%d", &xbox.scoremax);
	printf("Temps de jeu : \n");
	scanf("%f", &xbox.nb_hours_playing);


	printf("Le meilleur score de %s est : %d et le temps de jeu est de %f heures\n", xbox.name_player, xbox.scoremax, xbox.nb_hours_playing);
	return 0;
}

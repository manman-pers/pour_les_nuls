#include <stdio.h>

int main()
{
	float temp[5] = { 56.7, 62.8, 65.0, 63.3, 63.2 };

	float *t;

	t = temp;

	printf("Mardi il fera %.1f\n", *(t+1));
	printf("Vendredi il fera %.1f\n", *(t+4));

	return 0;
}

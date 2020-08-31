#include <stdio.h>

int main()
{
	int tablo[5] = { 2, 3, 5, 7, 11 };
	printf("L'adresse du tablo est %p\n", &tablo);
	printf("L'adresse du tablo est %p\n", tablo);

	return 0;
}

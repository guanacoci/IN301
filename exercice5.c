#include <stdio.h>
#include <stdlib.h>

void decoupeSecondes(int secondes);

int main()
{
	int secondesSaisies;
	secondesSaisies = 0;
	printf("donnez moi une valeur en secondes.\n");
	scanf("%d", &secondesSaisies);
	decoupeSecondes(secondesSaisies);
	return 0;
}

void decoupeSecondes(int secondes)
{
	int secondesDepart = secondes;
	int minutes;
	int heures;
	minutes = secondes / 60;
	heures = minutes / 60;
	
	secondes = secondes % 60;
	minutes = minutes % 60;
	
	printf("vous aviez %d secondes au depart. \n", secondesDepart);
	printf("vous avez : \n %d heures.\n %d minutes. \n %d secondes.\n", heures, minutes, secondes);
}

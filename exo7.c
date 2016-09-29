#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	float precision;
	int i;
	float resultat;
	float precedent;
	int estOk;
	
	n = 0;
	precision = 0.01;
	i = 1;
	resultat = 0.0;
	precedent = 0.0;
	estOk = 1;
	
	printf("donnez moi la limite \n");
	scanf("%d", &n);
	while(estOk && i < n)
	{
		precedent = resultat;
		resultat = resultat + (1.0 / (i * i));
		if(resultat - precedent < precision)
		{
			estOk = 0;
		}
		i++;
		printf("boucle N°%d\n resultat = %f\n", i, resultat);
	}
	printf("resultat = %f\n", resultat);
	return 0;
}

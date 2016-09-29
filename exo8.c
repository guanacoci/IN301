#include <stdio.h>
#include <stdlib.h>

int estPremier(int n);
int estMultiple(int a, int b);
int sontAmis(int a, int b);


int main()
{
	int i;
	scanf("%d", &i);
	printf("estPremier votre chiffre %d : %d\n", i, estPremier(i));
	
	int saisieUn;
	int saisieDeux;
	printf("tapez deux valeurs \n");
	scanf("%d %d", &saisieUn, &saisieDeux);
	printf("sont amis %d et %d \n%d\n", saisieUn, saisieDeux, sontAmis(saisieUn, saisieDeux));
	return 0;
}

int estPremier(int n)
{
	if(n == 1 || n == 2 || n == 3)
		return 1;
	int i;
	i = 0;
	for(i = 2; i * i <= n; i++) //pas opti
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int estMultiple(int a, int b)
{
	if(a % b == 0)
		return 1;
	return 0;
}

int sontAmis(int a, int b)
{
	int sommeDivisA;
	int sommeDivisB;
	int i;
	
	sommeDivisA = 0;
	sommeDivisB = 0;
	for(i = 1; i < a; i ++)
	{
		if(estMultiple(a, i) == 1)
			sommeDivisA += i;
	}
	for(i = 1; i < b; i++)
	{
		if(estMultiple(b,i) == 1)
			sommeDivisB += i;
	}
	if(sommeDivisB == a && sommeDivisA == b)
		return 1;
	else
		return 0;
}

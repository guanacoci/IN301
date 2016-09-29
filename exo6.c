#include <stdio.h>
#include <stdlib.h>

int multiplie(int a, int b);

int main()
{
	int chiffreUn;
	int chiffreDeux;
	printf("donne moi un chiffre\n");
	scanf("%d", &chiffreUn);
	printf("un second \n");
	scanf("%d", &chiffreDeux);
	printf("%d x %d = %d \n", chiffreUn, chiffreDeux, multiplie(chiffreUn, chiffreDeux));
	return 0;
}

int multiplie(int a, int b)
{
	if(a == 1)
	{
		return b;
	}
	else if(b == 1)
	{
		return a;
	}
	else
	{
		if(a % 2 == 0)
		{
			return multiplie(a/2, 2 * b);
		}
		else
		{
			return (multiplie(a-1,b) + b);
		}
	}
}

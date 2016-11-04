#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int age0;
	int age1;
	int ecart;
	
	printf("Quel âge avez-vous ?\n");
	scanf("%d", &age0);
	
	printf("Quel âge a votre frère ?\n");
	scanf("%d", &age1);
	
	
	printf("Vous avez %f années d'écart.", fabs (age0-age1));
	
	if(age0<age1)
	{
		printf("Votre frère est plus grand que vous. LOL");
	}
	
	else if(age0>age1)
	{
		printf("Vous êtes un grand frère.");
	}
	
	else
	{
		printf("Vous êtes jumeau !");
	}
	
	return 0;
}

